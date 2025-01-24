#ifndef MARACAS_HPP
#define MARACAS_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Maracas : public Instrument
{
private:

	string m_nom;

public:
    Maracas(string nom, string couleur);
    ~Maracas();

    void Afficher() const override;
    void JouerNotes(int rythme) const override;
    int ChoisirRythme() const override;
    void LirePartition() const override;
};

#endif // MARACAS_HPP