//
// Created by hugoc on 23/01/2025.
//

#ifndef FLUTE_H
#define FLUTE_H
#include "Instrument.hpp"


class Flute : public Instrument {
private:

public:

    Flute(string pNom, string pCouleur, float frequence);
    virtual ~Flute();

    virtual void Afficher() const override;
};



#endif //FLUTE_H