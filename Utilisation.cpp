#include "Utilisation.hpp"

vector<shared_ptr<Instrument>> Instruments(shared_ptr<vector<string>> partitions)
{
	shared_ptr<Xylophone> xylophone = make_shared<Xylophone>("xylophone", "bleu", 0.9,1,8);
	shared_ptr<Guitare> guitare = make_shared<Guitare>("guitare", "rouge", 1.4	,10.5,6);
	shared_ptr<Piano> piano = make_shared<Piano>("piano", "noir", 1, 20,8);
	shared_ptr<Flute> flute = make_shared<Flute>("flute", "blanc", 1.2,0.3,8);
	shared_ptr<Triangle> triangle = make_shared<Triangle>("triangle", "metal", 1.5, 2);
	shared_ptr<Theremine> theremine = make_shared<Theremine>("theremine", "bois", 2, 20);
	shared_ptr<Maracas> maracas = make_shared<Maracas>("flute", "blanc", 0.5, 1.0);

	vector<shared_ptr<Instrument>> instruments;
	instruments.push_back(xylophone);
	instruments.push_back(guitare);
	instruments.push_back(piano);
	instruments.push_back(flute);
	instruments.push_back(triangle);
	instruments.push_back(theremine);
	instruments.push_back(maracas);

	partitions->push_back("C:/ecole/Ynov/B1/POO/C++/Mario.txt");
	partitions->push_back("C:/ecole/Ynov/B1/POO/C++/StarWars.txt");

	return instruments;
}


void AjouterPartition(shared_ptr<vector<string>>& partitions)
{
	int rep;
	do
	{
		cout << "Souhaitez-vous ajouter une partition ?" << endl << "1. Oui" << endl << "2. Non" << endl << endl << "> ";
		cin >> rep;

	} while (rep != 2 && rep != 1 );
	
	if (rep == 2)
	{
		return;
	}
	else if (rep == 1)
	{
		string partition;
		cout << "Entrez le chemin de la partition que vous voulez ajouter." << endl << "> ";
		cin >> partition;
		partitions->push_back(partition);
	}
	return ;
}

void JouerNotes(shared_ptr<Instrument> instrument, float rythme)
{
	cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl << "Au clair de la Lune : aaazezaezzaaaazezaezzazzzzyyzauytaaazezaezza" << endl << "Freres Jacques : azeaazeaerterttytreatytreaataata" << endl << "Green Hill (Sonic) : ayauautyezauautayauaut" << endl << endl;
	char note;
	while (true)
	{
		cin >> note;
		switch (note)
		{
		case 'a':
			cout << "DO" << endl;
			Beep(523 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'z':
			cout << "RE" << endl;
			Beep(587 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'e':
			cout << "MI" << endl;
			Beep(659 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'r':
			cout << "FA" << endl;
			Beep(698 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 't':
			cout << "SOL" << endl;
			Beep(392 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'y':
			cout << "LA" << endl;
			Beep(440 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'u':
			cout << "SI" << endl;
			Beep(494 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'i':
			cout << "DO" << endl;
			Beep(523 * instrument->GetFrequence(), 50 * rythme);
			break;
		case 'q':
			return;
		}
	}
}

float ChoisirRythme()
{
	int rythme;
	cout << "1. Rythme lent" << endl << "2. Rythme normal" << endl << "3. Rythme rapide" << endl << endl;
	do
	{
		cout << "> ";
		cin >> rythme;
	} while (rythme < 1 || rythme > 3);
	switch (rythme)
	{
	case 1:
		rythme = 12.5;
		break;
	case 2:
		rythme = 10;
		break;
	case 3:
		rythme = 7.5;
		break;
	}
	return rythme;
}

void LirePartition(shared_ptr<Instrument>instrument, map<string, int>note_to_frequency, float rythme, string partition)
{
	cout << endl << endl << "Je lis la partition de l'instrument." << endl;

	ifstream fichier(partition);

	if (fichier)
	{
		string ligne;
		cout << " Musique en cours de lecture..." << endl;
		while (getline(fichier, ligne))
		{
			string mot1, mot2;
			bool espace = false;
			for (int i = 0; i < ligne.size(); i++)
			{
				if (ligne[i] == ' ')
				{
					espace = true;
					i++;
				}
				if (!espace)
				{
					mot1 += ligne[i];
				}
				else
				{
					mot2 += ligne[i];
				}
			}
			int frequence = note_to_frequency[mot1] * instrument->GetFrequence();
			float duree = stof(mot2) * 100 * rythme;

			if (frequence == 0)
			{
				Sleep(duree);
			}
			else
			{
				Beep(frequence, duree);
			}
		}
		cout << "Fin." << endl;
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
}


int Affichage(vector<shared_ptr<Instrument>> instruments)
{
	int choixInstrument;
	cout << "0. Quitter" << endl << endl;
	for (int i = 0; i < instruments.size(); i++)
	{
		cout << i + 1 << ". ";
		instruments[i]->Afficher();
	}
	cout << endl << "Quel instrument voulez-vous utiliser ? (Donnez le numero associe)" << endl;
	do {
		cout << "> ";
		cin >> choixInstrument;
	} while (choixInstrument < 0 || choixInstrument > instruments.size());
	return --choixInstrument;
}

float ChoixRythme(vector<shared_ptr<Instrument>> instruments, int choixInstrument, string action)
{
	cout << "Vous avez choisi de jouer " << action << endl << "Choississez un rythme avant." << endl;
	return ChoisirRythme();
}

int ChoixAction(shared_ptr<Instrument>instrument, vector<shared_ptr<Instrument>> instruments, int choixInstrument,shared_ptr<vector<string>> partitions)
{
	int choixAction;
	cout << " Que voulez-vous faire avec cet instrument ?" << endl << "1. Jouer des notes" << endl << "2. Lire une partition" << endl << "3. Changer d'instrument" << endl << "4. Quitter " << endl << "> ";
	cin >> choixAction;
	if (choixAction == 1)
	{
		float rythme;
		rythme = ChoixRythme(instruments, choixInstrument, "des notes.");
		JouerNotes(instrument, rythme);
	}
	else if (choixAction == 2)
	{
		float rythme;
		rythme = ChoixRythme(instruments, choixInstrument, "une partition.");

		int choixPartition;
		string partition;
		AjouterPartition(partitions);

		cout << "Mainteant choississez un fichier de partition." << endl << endl;
		for (int i = 0; i < partitions->size(); i++)
		{
			cout << i + 1 << ". " << (*partitions)[i] << endl;
		}
		cin >> choixPartition;
		partition = (*partitions)[choixPartition - 1];

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
		LirePartition(instrument, note_to_frequency, rythme, partition);
	}
	return choixAction;
}