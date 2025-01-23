//
// Created by hugoc on 21/01/2025.
//

#include "Guitare.h"
#include <iostream>
#include <ostream>

Guitare::Guitare(std::string pNom, std::string pCouleur) : Instrument(pNom, pCouleur) {

}

Guitare::~Guitare(){}


void Guitare::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

void Guitare::JouerNotes() const
{
    std::cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << std::endl;
    char note;
    while (true)
    {
        std::cin >> note;
        switch (note)
        {
            case 'a':
                std::cout << "DO" << std::endl;
            break;
            case 'z':
                std::cout << "RE" << std::endl;
            break;
            case 'e':
                std::cout << "MI" << std::endl;
            break;
            case 'r':
                std::cout << "FA" << std::endl;
            break;
            case 't':
                std::cout << "SOL" << std::endl;
            break;
            case 'y':
                std::cout << "LA" << std::endl;
            break;
            case 'u':
                std::cout << "SI" << std::endl;
            break;
            case 'i':
                std::cout << "DO" << std::endl;
            break;
            case 'q':
                return;
        }
    }
}

int Guitare::ChoisirRythme(int rythme) const
{
    int rythme;
    std::cout << "Je choisis la vitesse du rythme de l'instrument." << std::endl;
    std::cout << "1. Rythme lent" << std::endl;
    std::cout << "2. Rythme moyen" << std::endl;
    std::cout << "3. Rythme rapide" << std::endl;
    do
    {
        std::cout << "> ";
        std::cin >> rythme;
    } while (rythme < 1 || rythme > 3);
    return rythme;
}

void Guitare::LirePartition() const
{
    std::cout<< "Partition jouees" << std::endl;
}