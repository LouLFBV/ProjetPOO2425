//
// Created by hugoc on 21/01/2025.
//

#include "Instrument.h"
#include <iostream>

Instrument::Instrument(std::string pNom, std::string pCouleur): aNom(pNom), aCouleur(pCouleur) {

}

Instrument::~Instrument()
{
}

void Instrument::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

void Instrument::JouerNotes() const
{
    std::cout<< "Notes jouees" << std::endl;
}

void Instrument::ChoisirRythme() const
{
    std::cout<< "Ryhtme jouees" << std::endl;
}

void Instrument::LirePartition() const
{
    std::cout<< "Partition jouees" << std::endl;
}