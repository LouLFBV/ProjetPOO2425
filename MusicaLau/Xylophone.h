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

    Xylophone(std::string pNom, std::string pCouleur, float pFrequence);
    virtual ~Xylophone();

    void Afficher() const override;

};



#endif //XYLOPHONE_H
