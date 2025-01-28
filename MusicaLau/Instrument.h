//
// Created by hugoc on 21/01/2025.
//

#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iosfwd>
#include <string>
#include<fstream>
#include <windows.h>


class Instrument {
protected:

    std::string aNom;
    std::string aCouleur;
    float aFrequence;

public:

    Instrument(std::string pNom, std::string pCouleur, float pFrequence);
    virtual ~Instrument();

    virtual std::string GetNom() const;
    virtual std::string GetCouleur() const;
    virtual float GetFrequence() const ;

    virtual void Afficher() const;

};



#endif //INSTRUMENT_H
