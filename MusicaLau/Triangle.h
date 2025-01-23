//
// Created by hugoc on 23/01/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "Instrument.h"



class Triangle : public Instrument {
private:

public:

    Triangle(std::string pNom, std::string pCouleur);
    virtual ~Triangle();

    virtual void Afficher() const override;
    virtual void JouerNotes() const override;
    virtual int ChoisirRythme(int rythme) const override;
    virtual void LirePartition() const override;

};


#endif //TRIANGLE_H
