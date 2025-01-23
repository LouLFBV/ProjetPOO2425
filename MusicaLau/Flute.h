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

    Flute(std::string pNom, std::string pCouleur);
    virtual ~Flute();

    virtual void Afficher() const override;
    virtual void JouerNotes() const override;
    virtual int ChoisirRythme(int rythme) const override;
    virtual void LirePartition() const override;

};



#endif //FLUTE_H
