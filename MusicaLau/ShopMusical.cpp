//
// Created by hugoc on 21/01/2025.
//

#include "ShopMusical.h"

#include <iostream>
#include <ostream>
#include <vector>
#include <string>
#include "Piano.h"
#include "Triangle.h"

ShopMusical::ShopMusical() {
    std::cout << "ShopMusical Constructor" << std::endl;
}

ShopMusical::~ShopMusical() {
    std::cout << "ShopMusical Destructor" << std::endl;
}

void ShopMusical::config() {


    std::shared_ptr<Piano> piano = std::make_shared<Piano>("piano", "noir");
    std::shared_ptr<Piano> piano1 = std::make_shared<Piano>("piano1", "Rouge");
    std::shared_ptr<Instrument> instru = std::make_shared<Instrument>("instru", "noir");
    std::shared_ptr<Triangle> triangle = std::make_shared<Triangle>("triangle", "blanc", 40);
    std::vector<std::shared_ptr<Instrument>> instruments;
    std::vector<std::shared_ptr<Instrument>>::iterator it;
    instruments.push_back(piano);
    instruments.push_back(piano1);
    triangle->Afficher();

    int choixInstrument=0;

    // AFFICHAGE DES INSTRUMENTS
    for (it = instruments.begin(); it  != instruments.end(); ++it)
    {
        std::cout << (*it)<< ". ";
        (*it)->Afficher();
    }
    piano->Afficher();

    piano->JouerNotes(1);

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
