#include "Theremine.hpp"
#include <iostream>

using namespace std;

Theremine::Theremine(string nom, string couleur, double poids) : Instrument(nom, couleur), m_poids(poids)
{
}

Theremine::~Theremine()
{
}

void Theremine::Afficher() const
{
    cout << "Ceci est un thérémine de couleur " << m_couleur << " et de poids " << m_poids << " kg." << endl;
}