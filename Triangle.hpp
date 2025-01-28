#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Instrument.hpp"


class Triangle : public Instrument {
private:
    int aMasse;

public:

    Triangle(string pNom, string pCouleur, float frequence, int pMasse);
    virtual ~Triangle();

    virtual void Afficher() const override;

};


#endif //TRIANGLE_H