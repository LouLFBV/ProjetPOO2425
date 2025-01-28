//
// Created by hugoc on 23/01/2025.
//

#ifndef FLUTE_H
#define FLUTE_H
#include "Instrument.hpp"


class Flute : public Instrument 
{
private:

	int m_nombreDeTrou;

public:

    Flute(string pNom, string pCouleur, float frequence, float poids, int nombreDeTrou);
    virtual ~Flute();

    virtual void Afficher() const override;
};



#endif //FLUTE_H