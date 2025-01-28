//
// Created by hugoc on 23/01/2025.
//

#ifndef FLUTE_H
#define FLUTE_H
#include <string>
#include "Instrument.h"


class Flute : public Instrument {
private:

public:

    Flute(std::string pNom, std::string pCouleur, float pFrequence);
    virtual ~Flute();

    virtual void Afficher() const override;

};



#endif //FLUTE_H
