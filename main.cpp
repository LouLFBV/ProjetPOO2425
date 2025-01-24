#include "Xylophone.hpp"
#include "Guitare.hpp"
#include "Piano.hpp"
#include "Maracas.hpp"
#include "Theremine.hpp"

#include<memory>
#include <vector>

int main()
{

	// CREATION D'INSTRUMENTS

	shared_ptr<Xylophone> xylophone = make_shared<Xylophone>("xylophone", "bleu");
	shared_ptr<Guitare> guitare = make_shared<Guitare>("guitare", "rouge");
	shared_ptr<Piano> piano = make_shared<Piano>("piano", "noir");
	shared_ptr<Maracas> maracas = make_shared<Maracas>("maracas", "vert", 0.5);
	shared_ptr<Theremine> theremine = make_shared<Theremine>("theremine", "argent", 1.2);
	shared_ptr<Instrument> instrument = make_shared<Instrument>("instrument", "inconnu");

	vector<shared_ptr<Instrument>> instruments;
	instruments.push_back(xylophone);
	instruments.push_back(guitare);
	instruments.push_back(piano);
	instruments.push_back(maracas);
	instruments.push_back(theremine);
	instruments.push_back(instrument);

	cout << "~~~ BIENVUENUE CHEZ MUSICALOU ~~~" << endl << endl << "Voici les instruments que nous avons en stock : " << endl << endl;

	int choixInstrument = 0;

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

	int choixAction = 0;
	cout << " Que voulez-vous faire avec cet instrument ?" << endl << "1. Jouer des notes" << endl << "2. Choisir un rythme" << endl << "3. Lire une partition" << endl;
	do
	{
		cout << "> ";
		cin >> choixAction;
		if (choixAction == 1)
		{
			instruments[choixInstrument]->JouerNotes(1);
		}
		else if (choixAction == 2)
		{
			instruments[choixInstrument]->ChoisirRythme();
		}
		else if (choixAction == 3)
		{
			instruments[choixInstrument]->LirePartition();
		}
	} while (choixAction < 1 || choixAction > 3);

	cout << "Merci d'avoir utilise notre service!" << endl;




	return 0;
}