#include "Theremine.hpp"

Theremine::Theremine(string nom, string couleur, float frequence, float poids) : Instrument(nom, couleur, frequence,poids)
{
}

Theremine::~Theremine()
{
}

void Theremine::Afficher() const
{
    cout << "Theremine de couleur " << m_couleur << " et de " << m_poids << " kg." << endl;
}