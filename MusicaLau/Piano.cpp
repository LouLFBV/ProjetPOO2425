//
// Created by hugoc on 21/01/2025.
//

#include "Piano.h"

#include <iostream>
#include <ostream>
#include <windows.h> // Pour Beep et Sleep sous Windows

Piano::Piano(std::string pNom, std::string pCouleur) : Instrument(pNom, pCouleur) {

}

Piano::~Piano(){}


void Piano::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

void Piano::JouerNotes(float rythme) const
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

int Piano::ChoisirRythme() const
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

void Piano::LirePartition() const {
    std::cout << "Frere Jacque" << std::endl;
    Beep(262, 500);  // C4
    Sleep(500);
    Beep(262, 500);  // C4
    Sleep(500);
    Beep(294, 500);  // D4
    Sleep(500);
    Beep(262, 500);  // C4
    Sleep(500);
    Beep(349, 500);  // F4
    Sleep(500);
    Beep(349, 500);  // F4
    Sleep(500);
    Beep(262, 500);  // C4
    Sleep(1000);      // Pause longue

    // Répétition avec changement
    Beep(262, 400);  // C4
    Sleep(400);
    Beep(262, 400);  // C4
    Sleep(400);
    Beep(294, 400);  // D4
    Sleep(400);
    Beep(262, 400);  // C4
    Sleep(400);
    Beep(349, 400);  // F4
    Sleep(400);
    Beep(349, 400);  // F4
    Sleep(400);
    Beep(262, 400);  // C4
    Sleep(1000);      // Pause longue

    // Ajout de variation
    Beep(262, 250);  // C4
    Sleep(250);
    Beep(294, 250);  // D4
    Sleep(250);
    Beep(262, 250);  // C4
    Sleep(250);
    Beep(349, 250);  // F4
    Sleep(250);
    Beep(349, 250);  // F4
    Sleep(250);
    Beep(262, 250);  // C4
    Sleep(500);      // Pause longue

    Beep(220, 500);  // A3 (variation de tonalité)
    Sleep(500);
    Beep(220, 500);  // A3
    Sleep(500);
    Beep(220, 500);  // A3
    Sleep(500);
    Beep(220, 500);  // A3
    Sleep(500);

    // Retour à la mélodie principale avec variation
    Beep(262, 500);  // C4
    Sleep(500);
    Beep(262, 500);  // C4
    Sleep(500);
    Beep(294, 500);  // D4
    Sleep(500);
    Beep(262, 500);  // C4
    Sleep(500);
    Beep(349, 500);  // F4
    Sleep(500);
    Beep(349, 500);  // F4
    Sleep(500);
    Beep(262, 500);  // C4
    Sleep(1000);      // Pause longue

}

