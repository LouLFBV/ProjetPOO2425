#ifndef MARACAS_HPP
#define MARACAS_HPP

#include "Instrument.hpp"


class Maracas : public Instrument
{
private:

    float m_poids;

public:
    Maracas(string nom, string couleur, float frequende, float poids);
    ~Maracas();

    void Afficher() const override;
};

#endif