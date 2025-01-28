#include "Xylophone.hpp"
#include "Guitare.hpp"
#include "Piano.hpp"
#include "Flute.hpp"
#include "Triangle.hpp"
#include "Maracas.hpp"
#include "Theremine.hpp"

#include "Utilisation.hpp"


int main()
{
	// CREATION D'INSTRUMENTS

	vector<shared_ptr<Instrument>> instruments = Instruments();

	cout << " ~~~~ BIENVUENUE CHEZ *MUSICALAU* ~~~" << endl << endl << "Voici les instruments que nous avons en stock : " << endl << endl;


	// AFFICHAGE DES INSTRUMENTS
	int choixInstrument;
	choixInstrument = Affichage(instruments);

	cout << "Vous avez choisi : " << instruments[choixInstrument]->GetNom() << " " << instruments[choixInstrument]->GetCouleur() << endl << endl;

	// UTILISATION DE L'INSTRUMENT CHOISI

	int choixAction;
	do
	{
		//LIRE PARTITION
		choixAction = ChoixAction(instruments[choixInstrument], instruments, choixInstrument);
	} while (choixAction != 3);

	cout << "Merci d'avoir utilise notre service!" << endl;


	return 0;
}