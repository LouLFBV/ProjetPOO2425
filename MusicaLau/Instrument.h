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

public:

    Instrument(std::string pNom, std::string pCouleur);
    virtual ~Instrument();

    std::string GetNom() const;
    std::string GetCouleur() const;

    virtual void Afficher() const;
    virtual void JouerNotes(float rythme) const;
    virtual int ChoisirRythme() const;
    virtual void LirePartition() const;
};



#endif //INSTRUMENT_H
