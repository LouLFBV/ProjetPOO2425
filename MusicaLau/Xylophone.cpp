//
// Created by hugoc on 21/01/2025.
//

#include "Xylophone.h"
#include <iostream>
#include <ostream>

Xylophone::Xylophone(std::string pNom, std::string pCouleur, float pFrequence) : Instrument(pNom, pCouleur, pFrequence) {

}

Xylophone::~Xylophone(){}


void Xylophone::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}
