#ifndef THEREMINE_HPP
#define THEREMINE_HPP

#include "Instrument.hpp"

class Theremine : public Instrument
{

public:
    Theremine(string nom, string couleur, float frequence, float poids);
    ~Theremine();

    void Afficher() const override;
};

#endif // THEREMINE_HPP