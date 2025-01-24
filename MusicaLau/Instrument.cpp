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
std::string Instrument::GetNom() const
{
    return aNom;
}

std::string Instrument::GetCouleur() const
{
    return aCouleur;
}

void Instrument::Afficher() const
{
    std::cout << "Cet instrument est un " << aNom << " de couleur " << aCouleur << std::endl;
}

void Instrument::JouerNotes() const
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

int Instrument::ChoisirRythme() const
{
    int rythme ;
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

void Instrument::LirePartition() const
{
    std::cout<< "Mario " << std::endl;
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(3136, 83);    // G7 - 3136 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 83);    // G6 - 1568 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 83);    // G6 - 1568 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1319, 83);    // E6 - 1319 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1865, 83);    // A#6 - 1865 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 111);   // G6 - 1568 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(2637, 111);   // E7 - 2637 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3136, 111);   // G7 - 3136 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3520, 83);    // A7 - 3520 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2794, 83);    // F7 - 2794 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(3136, 83);    // G7 - 3136 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(166);        // Silence 166 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2349, 83);    // D7 - 2349 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 83);    // G6 - 1568 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1319, 83);    // E6 - 1319 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1865, 83);    // A#6 - 1865 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 111);   // G6 - 1568 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(2637, 111);   // E7 - 2637 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3136, 111);   // G7 - 3136 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3520, 83);    // A7 - 3520 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2794, 83);    // F7 - 2794 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(3136, 83);    // G7 - 3136 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2349, 83);    // D7 - 2349 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms



}