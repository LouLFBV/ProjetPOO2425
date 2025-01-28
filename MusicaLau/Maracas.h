//
// Created by hugoc on 28/01/2025.
//

#ifndef MARACAS_H
#define MARACAS_H

#include "Instrument.h"

class Maracas : public Instrument
{
private:

    float aPoids;

public:
    Maracas(std::string pNom, std::string pCouleur, float pFrequence, float pPoids);
    ~Maracas();

    void Afficher() const override;
};



#endif //MARACAS_H
