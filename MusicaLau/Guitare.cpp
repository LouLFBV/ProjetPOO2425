//
// Created by hugoc on 21/01/2025.
//

#include "Guitare.h"
#include <iostream>
#include <ostream>

Guitare::Guitare(std::string pNom, std::string pCouleur, float pFrequence) : Instrument(pNom, pCouleur, pFrequence ) {

}

Guitare::~Guitare(){}


void Guitare::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

