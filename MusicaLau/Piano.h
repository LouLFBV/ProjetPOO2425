//
// Created by hugoc on 21/01/2025.
//

#ifndef PIANO_H
#define PIANO_H
#include <string>
#include "Instrument.h"



class Piano : public Instrument {
private:

public:

    Piano(std::string pNom, std::string pCouleur);
    virtual ~Piano();

    virtual void Afficher() const override;
    virtual void JouerNotes() const override;
    virtual int ChoisirRythme() const override;
    virtual void LirePartition() const override;

};



#endif //PIANO_H
