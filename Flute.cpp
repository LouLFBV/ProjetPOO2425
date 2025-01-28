//
// Created by hugoc on 23/01/2025.
//

#include "Flute.hpp"

Flute::Flute(string pNom, string pCouleur, float frequence) : Instrument(pNom, pCouleur, frequence) {

}

Flute::~Flute() {}


void Flute::Afficher() const
{
    cout << "Flute de couleur " << m_couleur << endl;
}
