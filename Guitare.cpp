#include "Guitare.hpp"

Guitare::Guitare(string nom, string couleur) : Instrument(nom, couleur)
{
}

Guitare::~Guitare()
{
}

void Guitare::Afficher() const
{
	cout << "Ceci est une guitare." << endl;
}

void Guitare::JouerNotes() const
{
}

void Guitare::ChoisirRythme() const
{
}

void Guitare::LirePartition() const
{
}
