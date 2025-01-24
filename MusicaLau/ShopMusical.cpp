//
// Created by hugoc on 21/01/2025.
//

#include "ShopMusical.h"

#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include "Piano.h"

ShopMusical::ShopMusical() {
    std::cout << "ShopMusical Constructor" << std::endl;
}

ShopMusical::~ShopMusical() {
    std::cout << "ShopMusical Destructor" << std::endl;
}

void ShopMusical::config() {

    std::shared_ptr<Piano> piano = std::make_shared<Piano>("piano", "noir");
    std::shared_ptr<Piano> piano1 = std::make_shared<Piano>("piano1", "Rouge");
    std::vector<std::shared_ptr<Instrument>> instruments;
    instruments.push_back(piano);
    instruments.push_back(piano1);

    int choixInstrument=0;

    // AFFICHAGE DES INSTRUMENTS
    for (int i = 0; i < instruments.size(); i++)
    {
        std::cout << i + 1 << ". ";
        instruments[i]->Afficher();
    }
    piano->Afficher();

}

void ShopMusical::TempsMusical() {

}


void ShopMusical::unconfig() {

}

int main() {
    ShopMusical *app = new ShopMusical();

    app->config();
    app->TempsMusical();
    app->unconfig();
    return 0;
}
