#include "Maracas.hpp"
#include <iostream>

using namespace std;

Maracas::Maracas(string nom, string couleur) : Instrument(nom, couleur)
{
}

Maracas::~Maracas()
{
}

void Maracas::Afficher() const
{
    cout << "Ceci est un maracas de couleur " << m_couleur << "." << endl;
}

void Maracas::JouerNotes(int rythme) const
{
    cout << "Pour jouer des maracas, secouez-les en rythme." << endl;
    // Implémentation spécifique pour jouer des maracas
}

int Maracas::ChoisirRythme() const
{
    int rythme;
    cout << "Je choisis la vitesse du rythme des maracas." << endl;
    cout << "1. Rythme lent" << endl;
    cout << "2. Rythme moyen" << endl;
    cout << "3. Rythme rapide" << endl;
    do
    {
        cout << "> ";
        cin >> rythme;
    } while (rythme < 1 || rythme > 3);
    return rythme;
}

void Maracas::LirePartition() const
{

    cout << "Je lis la partition des maracas." << endl;

    // Partition pour "Twinkle Twinkle Little Star"

    Beep(261, 500);  // C4
    Beep(261, 500);  // C4
    Beep(392, 500);  // G4
    Beep(392, 500);  // G4
    Beep(440, 500);  // A4
    Beep(440, 500);  // A4
    Beep(392, 1000); // G4
    Sleep(500);      // Pause

    Beep(349, 500);  // F4
    Beep(349, 500);  // F4
    Beep(330, 500);  // E4
    Beep(330, 500);  // E4
    Beep(294, 500);  // D4
    Beep(294, 500);  // D4
    Beep(261, 1000); // C4
    Sleep(500);      // Pause

    Beep(392, 500);  // G4
    Beep(392, 500);  // G4
    Beep(349, 500);  // F4
    Beep(349, 500);  // F4
    Beep(330, 500);  // E4
    Beep(330, 500);  // E4
    Beep(294, 1000); // D4
    Sleep(500);      // Pause

    Beep(392, 500);  // G4
    Beep(392, 500);  // G4
    Beep(349, 500);  // F4
    Beep(349, 500);  // F4
    Beep(330, 500);  // E4
    Beep(330, 500);  // E4
    Beep(294, 1000); // D4
    Sleep(500);      // Pause

    Beep(261, 500);  // C4
    Beep(261, 500);  // C4
    Beep(392, 500);  // G4
    Beep(392, 500);  // G4
    Beep(440, 500);  // A4
    Beep(440, 500);  // A4
    Beep(392, 1000); // G4
    Sleep(500);      // Pause

    Beep(349, 500);  // F4
    Beep(349, 500);  // F4
    Beep(330, 500);  // E4
    Beep(330, 500);  // E4
    Beep(294, 500);  // D4
    Beep(294, 500);  // D4
    Beep(261, 1000); // C4
    Sleep(500);      // Pause
}
