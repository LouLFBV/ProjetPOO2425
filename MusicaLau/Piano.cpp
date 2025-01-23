//
// Created by hugoc on 21/01/2025.
//

#include "Piano.h"

#include <iostream>
#include <ostream>

Piano::Piano(std::string pNom, std::string pCouleur) : Instrument(pNom, pCouleur) {

}

Piano::~Piano(){}

void Piano::Afficher() const
{
    std::cout << "Ceci est un " << aNom << " La couleur est " << aCouleur <<std::endl;
}

void Piano::JouerNotes() const
{
    std::cout << "Je joue du piano" << std::endl;
}

void Piano::ChoisirRythme() const
{
    std::cout << "Je choisis le rythme" << std::endl;
}

void Piano::LirePartition() const
{
    std::cout << "Je lis la partition" << std::endl;
}