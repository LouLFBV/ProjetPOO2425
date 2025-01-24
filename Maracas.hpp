#ifndef MARACAS_HPP
#define MARACAS_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Maracas : public Instrument
{
private:

    double m_poids;

public:
    Maracas(string nom, string couleur, double poids);
    ~Maracas();

    void Afficher() const override;
};

#endif // MARACAS_HPP