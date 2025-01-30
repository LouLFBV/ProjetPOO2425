#include "Xylophone.hpp"

Xylophone::Xylophone(string nom, string couleur, float frequence, float poids, int nombreDeLamelle) : Instrument(nom, couleur, frequence, poids), m_nombreDeLamelle(nombreDeLamelle)
{
}

Xylophone::~Xylophone()
{
}

void Xylophone::Afficher() const
{
	cout << "Xylophone de couleur " << m_couleur << ", " << m_nombreDeLamelle << " lamelles, " << m_poids << " kg." << endl;
}

