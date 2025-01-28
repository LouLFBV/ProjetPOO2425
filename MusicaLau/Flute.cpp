//
// Created by hugoc on 23/01/2025.
//

#include "Flute.h"

#include <iostream>
#include <ostream>

Flute::Flute(std::string pNom, std::string pCouleur, float pFrequence) : Instrument(pNom, pCouleur, pFrequence) {

}

Flute::~Flute(){}


void Flute::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

