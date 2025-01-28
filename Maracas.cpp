#include "Maracas.hpp"

Maracas::Maracas(string nom, string couleur, float frequence, float poids) : Instrument(nom, couleur, frequence, poids)
{
}

Maracas::~Maracas()
{
}

void Maracas::Afficher() const
{
	cout << "Maracas de couleur " << m_couleur << " et de " << m_poids << " kg." << endl;
}