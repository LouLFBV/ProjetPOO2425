//
// Created by hugoc on 21/01/2025.
//

#include "Instrument.h"
#include <iostream>

Instrument::Instrument(std::string pNom, std::string pCouleur, float pFrequence): aNom(pNom), aCouleur(pCouleur), aFrequence(pFrequence) {

}

Instrument::~Instrument()
{
}

std::string Instrument::GetNom() const
{
    return aNom;
}

std::string Instrument::GetCouleur() const
{
    return aCouleur;
}

//toString()
void Instrument::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

float Instrument::GetFrequence() const {
    return aFrequence;
}