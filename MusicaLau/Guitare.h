//
// Created by hugoc on 21/01/2025.
//

#ifndef GUITARE_H
#define GUITARE_H
#include <string>

#include "Instrument.h"


class Guitare : public Instrument {


public:

    Guitare(std::string pNom, std::string pCouleur, float pFrequence);
    virtual ~Guitare();

    virtual void Afficher() const override;

};



#endif //GUITARE_H
