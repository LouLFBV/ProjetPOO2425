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

//void Guitare::JouerNotes(int rythme) const
//{
//	cout << "Pour jouer de la guitare. Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
//	char note;
//	while (true)
//	{
//		cin >> note;
//		switch (note)
//		{
//		case 'a':
//			cout << "DO" << endl;
//			break;
//		case 'z':
//			cout << "RE" << endl;
//			break;
//		case 'e':
//			cout << "MI" << endl;
//			break;
//		case 'r':
//			cout << "FA" << endl;
//			break;
//		case 't':
//			cout << "SOL" << endl;
//			break;
//		case 'y':
//			cout << "LA" << endl;
//			break;
//		case 'u':
//			cout << "SI" << endl;
//			break;
//		case 'i':
//			cout << "DO" << endl;
//			break;
//		case 'q':
//			return;
//		}
//	}
//}
//
//int Guitare::ChoisirRythme() const
//{
//
//	int rythme;
//	cout << "Je choisis la vitesse du rythme de la guitare." << endl;
//	cout << "1. Rythme lent" << endl;
//	cout << "2. Rythme moyen" << endl;
//	cout << "3. Rythme rapide" << endl;
//	do
//	{
//		cout << "> ";
//		cin >> rythme;
//	} while (rythme < 1 || rythme > 3);
//	return rythme;
//}
//
//void Guitare::LirePartition(map<string, int> pp) const
//{
//	cout << "Je lis la partition de la guitare." << endl;
//}
