//
// Created by hugoc on 28/01/2025.
//

#include "Maracas.h"

#include <iostream>

Maracas::Maracas(std::string pNom, std::string pCouleur, float pFrequence, float pPoids) : Instrument(pNom, pCouleur, pFrequence), aPoids(pPoids)
{
}

Maracas::~Maracas()
{
}

void Maracas::Afficher() const
{
    std::cout << "Ceci est un maracas de couleur " << aCouleur << " et de poids " << aPoids << " kg." << std::endl;
}