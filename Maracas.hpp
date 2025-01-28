#ifndef MARACAS_HPP
#define MARACAS_HPP

#include "Instrument.hpp"


class Maracas : public Instrument
{
public:
    Maracas(string nom, string couleur, float frequence, float poids);
    ~Maracas();

    void Afficher() const override;
};

#endif // MARACAS_HPP