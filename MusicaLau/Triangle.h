//
// Created by hugoc on 23/01/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "Instrument.h"



class Triangle : public Instrument {
private:
    double aPoids;

public:

    Triangle(std::string pNom, std::string pCouleur, float pFrequence , double pPoids);
    virtual ~Triangle();

    void Afficher() const override;

};


#endif //TRIANGLE_H
