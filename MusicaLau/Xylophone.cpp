//
// Created by hugoc on 21/01/2025.
//

#include "Xylophone.h"
#include <iostream>
#include <ostream>

Xylophone::Xylophone(std::string pNom, std::string pCouleur) : Instrument(pNom, pCouleur) {

}

Xylophone::~Xylophone(){}


void Xylophone::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

void Xylophone::JouerNotes(float rythme) const
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
            Beep(523, 500*rythme);
            break;
            case 'z':
                std::cout << "RE" << std::endl;
            Beep(587, 500 * rythme);
            break;
            case 'e':
                std::cout << "MI" << std::endl;
            Beep(659, 500 * rythme);
            break;
            case 'r':
                std::cout << "FA" << std::endl;
            Beep(698, 500 * rythme);
            break;
            case 't':
                std::cout << "SOL" << std::endl;
            Beep(784, 500 * rythme);
            break;
            case 'y':
                std::cout << "LA" << std::endl;
            Beep(440, 500 * rythme);
            break;
            case 'u':
                std::cout << "SI" << std::endl;
            Beep(494, 500 * rythme);
            break;
            case 'i':
                std::cout << "DO" << std::endl;
            Beep(523, 500 * rythme);
            break;
            case 'q':
                return;
        }
    }
}

int Xylophone::ChoisirRythme() const
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

void Xylophone::LirePartition() const
{
    std::cout<< "Partition jouees" << std::endl;
}