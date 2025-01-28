//
// Created by hugoc on 23/01/2025.
//

#include "Triangle.h"

#include <iostream>
#include <ostream>

Triangle::Triangle(std::string pNom, std::string pCouleur, float pFrequence ,double pPoids) : Instrument(pNom, pCouleur, pFrequence) , aPoids( pPoids) {

}

Triangle::~Triangle(){}


void Triangle::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << " et de poid " << aPoids << std::endl;
}
