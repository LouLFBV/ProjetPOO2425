#include "Utilisation.hpp"

int main()
{
	// CREATION D'INSTRUMENTS ET DE PARTITIONS
	shared_ptr<vector<string>> partitions = make_shared<vector<string>>();
	vector<shared_ptr<Instrument>> instruments = Instruments(partitions);

	cout << " ~~~~ BIENVUENUE CHEZ *MUSICALAU* ~~~" << endl << endl << "Voici les instruments que nous avons en stock : " << endl << endl;


	// AFFICHAGE DES INSTRUMENTS
	int choixInstrument;
	do
	{
		choixInstrument = Affichage(instruments);
		if (choixInstrument == -1)
		{
			break;
		}	
		cout << "Vous avez choisi : " << instruments[choixInstrument]->GetNom() << " " << instruments[choixInstrument]->GetCouleur() << endl << endl;

		// UTILISATION DE L'INSTRUMENT CHOISI

		int choixAction;
		do
		{
			choixAction = ChoixAction(instruments[choixInstrument], instruments, choixInstrument, partitions);
		} while (choixAction < 3);
		if (choixAction == 4)
		{
			break;
		}
	} while (choixInstrument != 0);
	
	cout << "Merci d'avoir utilise notre service!" << endl;

	return 0;
}