#ifndef THEREMINE_HPP
#define THEREMINE_HPP

#include<iostream>
#include<string>
#include <windows.h>
#include "Instrument.hpp"

using namespace std;

class Theremine : public Instrument
{
private:

	string m_nom;

public:
    Theremine(string nom, string couleur);
    ~Theremine();

    void Afficher() const override;
    void JouerNotes(int rythme) const override;
    int ChoisirRythme() const override;
    void LirePartition() const override;
};

#endif // THEREMINE_HPP