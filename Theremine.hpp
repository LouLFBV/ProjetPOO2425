#ifndef THEREMINE_HPP
#define THEREMINE_HPP

#include "Instrument.hpp"

class Theremine : public Instrument
{
private:

    int m_poids;

public:
    Theremine(string nom, string couleur, float frequence, int poids);
    ~Theremine();

    void Afficher() const override;
};

#endif // THEREMINE_HPP