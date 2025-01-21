#include "Piano.hpp"

Piano::Piano(string nom, string couleur) : Instrument(nom, couleur){}

Piano::~Piano(){}

void Piano::Afficher() const
{
	cout << "Ceci est un piano." << endl;
}

void Piano::JouerNotes() const
{
	cout << "Je joue du piano" << endl;
}

void Piano::ChoisirRythme() const
{
	cout << "Je choisis le rythme" << endl;
}

void Piano::LirePartition() const
{
	cout << "Je lis la partition" << endl;
}
