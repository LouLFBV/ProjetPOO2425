//
// Created by hugoc on 28/01/2025.
//

#include "Theremine.h"

#include <iostream>

Theremine::Theremine(std::string pNom, std::string pCouleur, float pFrequence, double pPoids) : Instrument(pNom, pCouleur, pFrequence),  aPoids(pPoids)
{
}

Theremine::~Theremine()
{
}


void Theremine::Afficher() const
{
    std::cout << "Ceci est un theremine de couleur " << aCouleur << " et de poids " << aPoids << " kg." << std::endl;
}
