#include "Xylophone.hpp"

Xylophone::Xylophone(string nom, string couleur) : Instrument(nom, couleur)
{
}

Xylophone::~Xylophone()
{
}

void Xylophone::Afficher() const
{
	cout << "Ceci est une xylophone de couleur " << m_couleur << "." << endl;
}

void Xylophone::JouerNotes() const
{
	cout << "Pour jouer xylophone. Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
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

void Xylophone::ChoisirRythme() const
{
	cout << "Je choisis le rythme du xylophone." << endl;
}

void Xylophone::LirePartition() const
{
	cout << "Je lis la partition du xylophone." << endl;
}
