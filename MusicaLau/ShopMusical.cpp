//
// Created by hugoc on 21/01/2025.
//

#include "ShopMusical.h"

#include <iostream>
#include <ostream>
#include <string>

ShopMusical::ShopMusical() {
    std::cout << "ShopMusical Constructor" << std::endl;
}

ShopMusical::~ShopMusical() {
    std::cout << "ShopMusical Destructor" << std::endl;
}

void ShopMusical::config() {
    User->ChoisirRythme();
    User->ChoisirRythme();

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
