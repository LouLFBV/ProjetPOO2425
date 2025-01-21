//
// Created by hugoc on 21/01/2025.
//

#ifndef SHOPMUSICAL_H
#define SHOPMUSICAL_H

#include "Piano.h"

class ShopMusical {
    private:

    Instrument *User;

public :
    ShopMusical();
    ~ShopMusical();

    void config();
    void TempsMusical();
    void unconfig();
};



#endif //SHOPMUSICAL_H
