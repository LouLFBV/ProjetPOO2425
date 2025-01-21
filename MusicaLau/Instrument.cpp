//
// Created by hugoc on 21/01/2025.
//

#include "Instrument.h"
#include <iostream>

Instrument::Instrument(std::string nom, std::string couleur) : m_nom(nom), m_couleur(couleur)
{
}

Instrument::~Instrument()
{
}

void Instrument::Afficher() const
{
    std::cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << std::endl;
}

void Instrument::JouerNotes() const
{
}

void Instrument::ChoisirRythme() const
{
}

void Instrument::LirePartition() const
{
}