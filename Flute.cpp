//
// Created by hugoc on 23/01/2025.
//

#include "Flute.hpp"

Flute::Flute(string pNom, string pCouleur, float frequence, float poids, int nombreDeTrou) : Instrument(pNom, pCouleur, frequence, poids), m_nombreDeTrou(nombreDeTrou)
{
}

Flute::~Flute() {}


void Flute::Afficher() const
{
    cout << "Flute de couleur " << m_couleur << " et de " <<m_nombreDeTrou << " trous, " << m_poids << " kg." << endl;
}
