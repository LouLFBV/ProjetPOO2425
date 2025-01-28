#include "Theremine.hpp"

Theremine::Theremine(string nom, string couleur, float frequence, float poids) : Instrument(nom, couleur, frequence), m_poids(poids)
{
}

Theremine::~Theremine()
{
}

void Theremine::Afficher() const
{
    cout << "Theremine de couleur " << m_couleur << " et de poids " << m_poids << " kg." << endl;
}