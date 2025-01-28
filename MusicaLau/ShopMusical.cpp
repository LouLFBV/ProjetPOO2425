//
// Created by hugoc on 21/01/2025.
//

#include "ShopMusical.h"

#include <iostream>
#include <ostream>
#include <vector>
#include <string>


ShopMusical::ShopMusical() {
    std::cout << "ShopMusical Constructor" << std::endl;
}

ShopMusical::~ShopMusical() {
    std::cout << "ShopMusical Destructor" << std::endl;
}

void ShopMusical::config() {
    // CREATION D'INSTRUMENTS
    std::vector<std::shared_ptr<Instrument>> instruments = Instruments();

    std::cout << " ~~~~ BIENVUENUE CHEZ *MUSICALAU* ~~~" << std::endl << std::endl << "Voici les instruments que nous avons en stock : " << std::endl << std::endl;


    // AFFICHAGE DES INSTRUMENTS
    int choixInstrument;
    do
    {
        choixInstrument = Affichage(instruments);
        if (choixInstrument == -1)
        {
            break;
        }
        std::cout << "Vous avez choisi : " << instruments[choixInstrument]->GetNom() << " " << instruments[choixInstrument]->GetCouleur() << std::endl << std::endl;

        // UTILISATION DE L'INSTRUMENT CHOISI

        int choixAction;
        do
        {
            //LIRE PARTITION
            choixAction = ChoixAction(instruments[choixInstrument], instruments, choixInstrument);
        } while (choixAction < 3);
        if (choixAction == 4)
        {
            break;
        }
    } while (choixInstrument != 0);

    std::cout << "Merci d'avoir utilise notre service!" << std::endl;
}

void ShopMusical::TempsMusical() {

}


void ShopMusical::unconfig() {

}

