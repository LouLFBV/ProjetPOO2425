//
// Created by hugoc on 21/01/2025.
//

#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iosfwd>
#include <string>


class Instrument {
protected:

    std::string aNom;
    std::string aCouleur;

public:

    Instrument(std::string pNom, std::string pCouleur);
    virtual ~Instrument();

    virtual void Afficher() const;
    virtual void JouerNotes() const;
    virtual void ChoisirRythme() const;
    virtual void LirePartition() const;
};



#endif //INSTRUMENT_H
