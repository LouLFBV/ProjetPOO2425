//
// Created by hugoc on 21/01/2025.
//

#ifndef PIANO_H
#define PIANO_H
#include <string>
#include "Instrument.h"



class Piano : public Instrument {


public:

    Piano(std::string pNom, std::string pCouleur, float pFrequence);
    virtual ~Piano();

    void Afficher() const override;


};



#endif //PIANO_H
