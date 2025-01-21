#include "Guitare.hpp"

Guitare::Guitare(string nom, string couleur) : Instrument(nom, couleur)
{
}

Guitare::~Guitare()
{
}

void Guitare::Afficher() const
{
	cout << "Ceci est une guitare de couleur " << m_couleur << "." << endl;
}

void Guitare::JouerNotes() const
{
	cout << "Pour jouer de la guitare. Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
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

void Guitare::ChoisirRythme() const
{

	cout << "Je choisis le rythme de la guitare." << endl;
}

void Guitare::LirePartition() const
{
	cout << "Je lis la partition de la guitare." << endl;
}
