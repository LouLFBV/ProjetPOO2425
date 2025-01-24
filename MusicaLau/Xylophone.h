//
// Created by hugoc on 21/01/2025.
//

#ifndef XYLOPHONE_H
#define XYLOPHONE_H
#include <string>
#include "Instrument.h"

class Xylophone : public Instrument {
    private :

    public:

    Xylophone(std::string pNom, std::string pCouleur);
    virtual ~Xylophone();

    virtual void Afficher() const override;
    virtual void JouerNotes() const override;
    virtual int ChoisirRythme() const override;
    virtual void LirePartition() const override;
};



#endif //XYLOPHONE_H
