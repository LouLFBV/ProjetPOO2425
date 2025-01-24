#include "Maracas.hpp"
#include <iostream>

using namespace std;

Maracas::Maracas(string nom, string couleur, double poids) : Instrument(nom, couleur), m_poids(poids)
{
}

Maracas::~Maracas()
{
}

void Maracas::Afficher() const
{
	cout << "Ceci est un maracas de couleur " << m_couleur << " et de poids " << m_poids << " kg." << endl;
}
