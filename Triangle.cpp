//
// Created by hugoc on 23/01/2025.
//

#include "Triangle.hpp"


Triangle::Triangle(string pNom, string pCouleur, float frequence, float poids) : Instrument(pNom, pCouleur, frequence, poids) {

}

Triangle::~Triangle() {}


void Triangle::Afficher() const
{
    cout << "Triangle de couleur " << m_couleur << " et de " << m_poids << " kg." << endl;
}