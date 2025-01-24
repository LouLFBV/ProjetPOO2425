#include "Theremine.hpp"
#include <iostream>

using namespace std;

Theremine::Theremine(string nom, string couleur) : Instrument(nom, couleur)
{
}

Theremine::~Theremine()
{
}

void Theremine::Afficher() const
{
    cout << "Ceci est un theremine de couleur " << m_couleur << "." << endl;
}

void Theremine::JouerNotes(int rythme) const
{
    cout << "Pour jouer du theremine, déplacez vos mains près des antennes." << endl;
}

int Theremine::ChoisirRythme() const
{
    int rythme;
    cout << "Je choisis la vitesse du rythme du theremine." << endl;
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

void Theremine::LirePartition() const
{
    cout << "Je lis la partition du theremine." << endl;

    Beep(196, 1200);
    Beep(196, 300);
    Beep(220, 400);
    Beep(196, 400);
    Beep(174, 300);
    Beep(155, 1000);
    Beep(146, 1000);
    Beep(196, 1000);
    Beep(196, 300);
    Beep(220, 400);
    Beep(196, 400);
    Beep(174, 300);
    Beep(155, 400);
    Beep(174, 300);
    Beep(155, 400);
    Beep(146, 1000);
}