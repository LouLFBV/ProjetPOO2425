#include "Xylophone.hpp"
#include "Guitare.hpp"
#include "Piano.hpp"

#include<memory>

map<string, int> note_to_frequency = {
	{"B0", 31}, {"C1", 33}, {"C#1", 35}, {"D1", 37}, {"D#1", 39}, {"E1", 41}, {"F1", 44}, {"F#1", 46}, {"G1", 49}, {"G#1", 52},
	{"A1", 55}, {"A#1", 58}, {"B1", 62}, {"C2", 65}, {"C#2", 69}, {"D2", 73}, {"D#2", 78}, {"E2", 82}, {"F2", 87}, {"F#2", 93},
	{"G2", 98}, {"G#2", 104}, {"A2", 110}, {"A#2", 117}, {"B2", 123}, {"C3", 131}, {"C#3", 139}, {"D3", 147}, {"D#3", 156},
	{"E3", 165}, {"F3", 175}, {"F#3", 185}, {"G3", 196}, {"G#3", 208}, {"A3", 220}, {"A#3", 233}, {"B3", 247}, {"C4", 262},
	{"C#4", 277}, {"D4", 294}, {"D#4", 311}, {"E4", 330}, {"F4", 349}, {"F#4", 370}, {"G4", 392}, {"G#4", 415}, {"A4", 440},
	{"A#4", 466}, {"B4", 494}, {"C5", 523}, {"C#5", 554}, {"D5", 587}, {"D#5", 622}, {"E5", 659}, {"F5", 698}, {"F#5", 740},
	{"G5", 784}, {"G#5", 831}, {"A5", 880}, {"A#5", 932}, {"B5", 988}, {"C6", 1047}, {"C#6", 1109}, {"D6", 1175}, {"D#6", 1245},
	{"E6", 1319}, {"F6", 1397}, {"F#6", 1480}, {"G6", 1568}, {"G#6", 1661}, {"A6", 1760}, {"A#6", 1865}, {"B6", 1976},
	{"C7", 2093}, {"C#7", 2217}, {"D7", 2349}, {"D#7", 2489}, {"E7", 2637}, {"F7", 2794}, {"F#7", 2960}, {"G7", 3136},
	{"G#7", 3322}, {"A7", 3520}, {"A#7", 3729}, {"B7", 3951}, {"C8", 4186}, {"C#8", 4435}, {"D8", 4699}, {"D#8", 4978}
};

int main()
{

	// CREATION D'INSTRUMENTS

	shared_ptr<Xylophone> xylophone = make_shared<Xylophone>("xylophone", "bleu");
	shared_ptr<Guitare> guitare = make_shared<Guitare>("guitare", "rouge");
	shared_ptr<Piano> piano = make_shared<Piano>("piano", "noir");
	shared_ptr<Instrument> instrument = make_shared<Instrument>("instrument", "inconnu");

	vector<shared_ptr<Instrument>> instruments;
	instruments.push_back(xylophone);
	instruments.push_back(guitare);
	instruments.push_back(piano);
	instruments.push_back(instrument);

	cout << " ~~~~ BIENVUENUE CHEZ *MUSICALAU* ~~~" << endl << endl<< "Voici les instruments que nous avons en stock : " << endl << endl;

	int choixInstrument=0;

	// AFFICHAGE DES INSTRUMENTS
	for (int i = 0; i < instruments.size(); i++)
	{
		cout << i + 1 << ". ";
		instruments[i]->Afficher();
	}
	cout << endl << "Quel instrument voulez-vous utiliser ? (Donnez le numero associe)" << endl;
	do {
		cout << "> ";
		cin >> choixInstrument;
	} while (choixInstrument < 1 || choixInstrument > instruments.size());
	
	
	choixInstrument--;

	cout << "Vous avez choisi : " << instruments[choixInstrument]->GetNom() << " " << instruments[choixInstrument]->GetCouleur() << endl << endl;

	// UTILISATION DE L'INSTRUMENT CHOISI

	int choixAction;
	cout << " Que voulez-vous faire avec cet instrument ?" << endl<< "1. Jouer des notes" << endl<< "2. Lire une partition" << endl << "3. Quitter"<<endl;
	do
	{
		cout << "> ";
		cin >> choixAction;
		if (choixAction == 1)
		{
			float rythme;
			cout << "Vous avez choisi de jouer des notes." << endl << "Choississez un rythme avant." << endl ;
			rythme = instruments[choixInstrument]->ChoisirRythme();
			instruments[choixInstrument]->JouerNotes(rythme);
		}
		else if (choixAction == 2)
		{
			float rythme;
			cout << "Vous avez choisi de lire une partition." << endl << "Choississez un rythme avant." << endl ;
			rythme = instruments[choixInstrument]->ChoisirRythme();

			int choixPartition;
			string partition;
			cout << "Mainteant choississez un fichier de partition." << endl << endl << "1.Mario" << endl << "2.StarWars" << endl <<"3.Autre" << endl << endl << "> ";
			cin >> choixPartition;

			switch (choixPartition)
			{
			case 1:
				partition = "C:/ecole/Ynov/B1/POO/C++/Mario.txt";
				break;
			case 2:
				partition = "C:/ecole/Ynov/B1/POO/C++/StarWars.txt";
				break;
			case 3:
				partition = "";
				break;
			}
			instruments[choixInstrument]->LirePartition( note_to_frequency,rythme,partition);
		}
	} while (choixAction != 3);
	
	cout << "Merci d'avoir utilise notre service!" << endl;

	


	return 0;
}