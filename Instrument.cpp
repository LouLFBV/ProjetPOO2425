#include "Instrument.hpp"

Instrument::Instrument(string nom, string couleur) : m_nom(nom), m_couleur(couleur)
{
}

Instrument::~Instrument()
{
}

string Instrument::GetNom() const
{
	return m_nom;
}

string Instrument::GetCouleur() const
{
	return m_couleur;
}

void Instrument::Afficher() const
{
	cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << endl;
}

void Instrument::JouerNotes(float rythme) const
{
	cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl << "Au clair de la Lune : aaazezaezzaaaazezaezzazzzzyyzauytaaazezaezza";
	char note;
	while (true)
	{
		cin >> note;
		switch (note)
		{
		case 'a':
			cout << "DO" << endl;
            Beep(523, 500*rythme);
			break;
		case 'z':
			cout << "RE" << endl;
            Beep(587, 500 * rythme);
			break;
		case 'e':
			cout << "MI" << endl;
            Beep(659, 500 * rythme);
			break;
		case 'r':
			cout << "FA" << endl;
            Beep(698, 500 * rythme);
			break;
		case 't':
			cout << "SOL" << endl;
            Beep(784, 500 * rythme);
			break;
		case 'y':
			cout << "LA" << endl;
            Beep(440, 500 * rythme);
			break;
		case 'u':
			cout << "SI" << endl;
            Beep(494, 500 * rythme);
			break;
		case 'i':
			cout << "DO" << endl;
            Beep(523, 500 * rythme);
			break;
		case 'q':
			return;
		}
	}
}

float Instrument::ChoisirRythme() const
{
	int rythme;
	cout << "1. Rythme lent (xO,5)" << endl<< "2. Rythme normal (x1)" << endl << "3. Rythme rapide(x1.5)" << endl<< "4. Rythme tres rapide(x2)" << endl << endl;
	do
	{
		cout << "> ";
		cin >> rythme;
	} while (rythme < 1 || rythme > 4);
	switch(rythme)
	{
		case 1:
			rythme = 0.5;
			break;	
		case 2:
			rythme = 1;
			break;
		case 3:
			rythme = 1.5;
			break;
		case 4:
			rythme = 2;
			break;
	}
	return rythme;
}

void Instrument::LirePartition(map<string,int>note_to_frequency, float rythme, string partition) const
{
	cout << "Je lis la partition de l'instrument." << endl;
    
	ifstream fichier(partition);  //Ouverture d'un fichier en lecture

	if (fichier)
	{
		string ligne; 
		cout << " Musique en cours de lecture..." << endl;
		while (getline(fichier,ligne))
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
            int frequence = note_to_frequency[mot1];
            float duree = stof(mot2)*1000/rythme;

			if (frequence == 0)
			{
				Sleep(duree);
			}
            else
            {
				Beep(frequence, duree);
            }
		}
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
}
