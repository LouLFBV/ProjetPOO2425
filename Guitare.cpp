#include "Guitare.hpp"

Guitare::Guitare(string nom, string couleur, float frequence) : Instrument(nom, couleur, frequence)
{
}

Guitare::~Guitare()
{
}

void Guitare::Afficher() const
{
	cout << "Guitare de couleur " << m_couleur << "." << endl;
}


