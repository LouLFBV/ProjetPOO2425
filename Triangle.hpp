//
// Created by hugoc on 23/01/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Instrument.hpp"


class Triangle : public Instrument 
{
public:

    Triangle(string pNom, string pCouleur, float frequence, float m_poids);
    virtual ~Triangle();

    virtual void Afficher() const override;

};


#endif //TRIANGLE_H