//
// Created by hugoc on 21/01/2025.
//

#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iosfwd>
#include <string>


class Instrument {
private:

    std::string m_nom;
    std::string m_couleur;

public:

    Instrument(std::string nom, std::string couleur);
    virtual ~Instrument();

    virtual void Afficher() const;
    virtual void JouerNotes() const;
    virtual void ChoisirRythme() const;
    virtual void LirePartition() const;
};



#endif //INSTRUMENT_H
