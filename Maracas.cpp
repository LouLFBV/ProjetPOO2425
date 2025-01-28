#include "Maracas.hpp"

Maracas::Maracas(string nom, string couleur, float frequence, float poids) : Instrument(nom, couleur, frequence), m_poids(poids)
{
}

Maracas::~Maracas()
{
}

void Maracas::Afficher() const
{
	cout << "Ceci est un maracas de couleur " << m_couleur << " et de poids " << m_poids << " kg." << endl;
}