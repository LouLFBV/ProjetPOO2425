//
// Created by hugoc on 28/01/2025.
//

#ifndef THERIMINE_H
#define THERIMINE_H

#include "Instrument.h"

class Theremine : public Instrument
{
private:

    double aPoids;

public:

    Theremine(std::string pNom, std::string pCouleur, float pFrequence, double pPoids);
    ~Theremine();


    void Afficher() const override;
};



#endif //THERIMINE_H
