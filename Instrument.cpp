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

void Instrument::JouerNotes(int rythme) const
{
	cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
	char note;
	while (true)
	{
		cin >> note;
		switch (note)
		{
		case 'a':
			cout << "DO" << endl;
			break;
		case 'z':
			cout << "RE" << endl;
			break;
		case 'e':
			cout << "MI" << endl;
			break;
		case 'r':
			cout << "FA" << endl;
			break;
		case 't':
			cout << "SOL" << endl;
			break;
		case 'y':
			cout << "LA" << endl;
			break;
		case 'u':
			cout << "SI" << endl;
			break;
		case 'i':
			cout << "DO" << endl;
			break;
		case 'q':
			return;
		}
	}
}

int Instrument::ChoisirRythme() const
{
	int rythme;
	cout << "Je choisis la vitesse du rythme de l'instrument." << endl;
	cout << "1. Rythme lent" << endl;
	cout << "2. Rythme moyen" << endl;
	cout << "3. Rythme rapide" << endl;
	do
	{
		cout << "> ";
		cin >> rythme;
	} while (rythme < 1 || rythme > 3);
	return rythme;
}

void Instrument::LirePartition() const
{
	cout << "Je lis la partition de l'instrument." << endl;
}
