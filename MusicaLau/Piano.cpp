//
// Created by hugoc on 21/01/2025.
//

#include "Piano.h"

#include <iostream>
#include <ostream>
#include <windows.h> // Pour Beep et Sleep sous Windows

Piano::Piano(std::string pNom, std::string pCouleur, float pFrequence) : Instrument(pNom, pCouleur, pFrequence) {

}

Piano::~Piano(){}


void Piano::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}


