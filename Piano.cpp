#include "Piano.hpp"

Piano::Piano(string nom, string couleur) : Instrument(nom, couleur){}

Piano::~Piano(){}

void Piano::Afficher() const
{
	cout << "Ceci est un piano de couleur " << m_couleur << "."  << endl;
}

void Piano::JouerNotes() const
{
	cout << "Pour jouer du piano. Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
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

void Piano::ChoisirRythme() const
{
	cout << "Je choisis le rythme du piano." << endl;
}

void Piano::LirePartition() const
{
	cout << "Je lis la partition du piano." << endl;
}
