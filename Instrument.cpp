#include "Instrument.hpp"

Instrument::Instrument(string nom, string couleur, float frequence) : m_nom(nom), m_couleur(couleur), m_frequence(frequence)
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

float Instrument::GetFrequence() const
{
	return m_frequence;
}

void Instrument::Afficher() const
{
	cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << endl;
}

void Instrument::JouerNotes(float rythme) const
{
	cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl << "Au clair de la Lune : aaazezaezzaaaazezaezzazzzzyyzauytaaazezaezza" << endl << " Freres Jacques : azeaazeaerterttytreatytreaataata" << endl << endl;
	char note;
	while (true)
	{
		cin >> note;
		switch (note)
		{
		case 'a':
			cout << "DO" << endl;
            Beep(523 * m_frequence, 50*rythme);
			break;
		case 'z':
			cout << "RE" << endl;
            Beep(587 * m_frequence, 50 * rythme);
			break;
		case 'e':
			cout << "MI" << endl;
            Beep(659 * m_frequence, 50 * rythme);
			break;
		case 'r':
			cout << "FA" << endl;
            Beep(698 * m_frequence, 50 * rythme);
			break;
		case 't':
			cout << "SOL" << endl;
            Beep(784 * m_frequence, 50 * rythme);
			break;
		case 'y':
			cout << "LA" << endl;
            Beep(440 * m_frequence, 50 * rythme);
			break;
		case 'u':
			cout << "SI" << endl;
            Beep(494 * m_frequence, 50 * rythme);
			break;
		case 'i':
			cout << "DO" << endl;
            Beep(523 * m_frequence, 50 * rythme);
			break;
		case 'q':
			return;
		}
	}
}

float Instrument::ChoisirRythme() const
{
	int rythme;
	cout << "1. Rythme lent" << endl<< "2. Rythme normal" << endl << "3. Rythme rapide" << endl << endl;
	do
	{
		cout << "> ";
		cin >> rythme;
	} while (rythme < 1 || rythme > 3);
	switch(rythme)
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

void Instrument::LirePartition(map<string,int>note_to_frequency, float rythme, string partition) const
{
	cout << "Je lis la partition de l'instrument." << endl;
    
	ifstream fichier(partition);  

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
            int frequence = note_to_frequency[mot1]*m_frequence;
            float duree = stof(mot2)*100*rythme;

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
