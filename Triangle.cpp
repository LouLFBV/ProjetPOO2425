#include "Triangle.hpp"


Triangle::Triangle(string pNom, string pCouleur, float frequence, int pMasse) : Instrument(pNom, pCouleur, frequence) {
    aMasse = pMasse;
}

Triangle::~Triangle() {}


void Triangle::Afficher() const
{
    cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << " et de poids " << aMasse << " kg." << endl;
}