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

    double m_poids;

public:
    Theremine(string nom, string couleur, double poids);
    ~Theremine();

    void Afficher() const override;
};

#endif // THEREMINE_HPP