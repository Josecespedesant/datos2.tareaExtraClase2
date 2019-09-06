//
// Created by josecespedes on 5/9/19.
//

#include "../Headers/Car.h"

void Car::update(int color) {

    if(color == 1){
        puedoAvanzar = true;
        std::cout << "Puedo avanzar" << std::endl;

    } else if(color == 0){
        puedoAvanzar = false;
        std::cout << "Debo detenerme" << std::endl;

    }
    else if(color == -1){
        puedoAvanzar = false;
        std::cout << "Estoy detenido" << std::endl;
    }
}

Car::Car(bool puedoAvanzar) {
    this->puedoAvanzar = puedoAvanzar;
    std::cout << "Estoy avanzando" << std::endl;
}