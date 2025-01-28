//
// Created by hugoc on 23/01/2025.
//

#include "Triangle.hpp"


Triangle::Triangle(string pNom, string pCouleur, float frequence, int pMasse) : Instrument(pNom, pCouleur, frequence) {
    aMasse = pMasse;
}

Triangle::~Triangle() {}


void Triangle::Afficher() const
{
    cout << "Triangle de couleur " << m_couleur << " et de poids " << aMasse << " kg." << endl;
}