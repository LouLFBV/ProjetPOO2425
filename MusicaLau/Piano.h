//
// Created by hugoc on 21/01/2025.
//

#ifndef PIANO_H
#define PIANO_H
#include <string>
#include "Instrument.h"


class Piano : public Instrument {
private:

    std::string m_nom;

public:

    Piano(std::string nom, std::string couleur);
    virtual ~Piano();

    virtual void Afficher() const override;
    virtual void JouerNotes() const override;
    virtual void ChoisirRythme() const override;
    virtual void LirePartition() const override;

};



#endif //PIANO_H
