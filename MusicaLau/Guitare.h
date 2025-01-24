//
// Created by hugoc on 21/01/2025.
//

#ifndef GUITARE_H
#define GUITARE_H
#include <string>

#include "Instrument.h"


class Guitare : public Instrument {
private :

public:

    Guitare(std::string pNom, std::string pCouleur);
    virtual ~Guitare();

    virtual void Afficher() const override;
    virtual void JouerNotes(float rythme) const override;
    virtual int ChoisirRythme() const override;
    virtual void LirePartition() const override;
};



#endif //GUITARE_H
