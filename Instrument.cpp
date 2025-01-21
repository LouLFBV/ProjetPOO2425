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

void Instrument::JouerNotes() const
{
	cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
	char note;
	while (true)
	{
		cin >> note;
		if (note == 'a')
		{
			cout << "DO" << endl;
		}
		else if (note == 'z')
		{
			cout << "RE" << endl;
		}
		else if (note == 'e')
		{
			cout << "MI" << endl;
		}
		else if (note == 'r')
		{
			cout << "FA" << endl;
		}
		else if (note == 't')
		{
			cout << "SO" << endl;
		}
		else if (note == 'y')
		{
			cout << "LA" << endl;
		}
		else if (note == 'u')
		{
			cout << "SI" << endl;
		}
		else if (note == 'i')
		{
			cout << "DO" << endl;
		}
		if (note == 'q')
		{
			break;
		}
	}
}

void Instrument::ChoisirRythme() const
{
	cout << "Je choisis le rythme de l'instrument." << endl;
}

void Instrument::LirePartition() const
{
	cout << "Je lis la partition de l'instrument." << endl;
}
