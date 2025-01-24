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

    // Son strident et très aigu en continu
    Beep(13000, 5000); // 13000 Hz pendant 10000 ms (10 secondes)
}