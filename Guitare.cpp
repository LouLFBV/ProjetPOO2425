#include "Guitare.hpp"

Guitare::Guitare(string nom, string couleur, float frequence, float poids, int nombreDeCorde) : Instrument(nom, couleur, frequence, poids), m_nombreDeCorde(nombreDeCorde)
{
}

Guitare::~Guitare()
{
}

void Guitare::Afficher() const
{
	cout << "Guitare de couleur " << m_couleur << " et de "<< m_nombreDeCorde << " cordes," << m_poids << " kg." << endl;
}


