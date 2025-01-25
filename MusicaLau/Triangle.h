//
// Created by hugoc on 23/01/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "Instrument.h"



class Triangle : public Instrument {
private:
    int aMasse;

public:

    Triangle(std::string pNom, std::string pCouleur, int pMasse);
    virtual ~Triangle();

    virtual void Afficher() const override;

};


#endif //TRIANGLE_H
