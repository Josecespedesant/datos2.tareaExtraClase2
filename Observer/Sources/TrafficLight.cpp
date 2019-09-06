//
// Created by josecespedes on 5/9/19.
//

#include "../Headers/TrafficLight.h"

void TrafficLight::notifyObservers() {

    for(Observer *observer : observers){
        observer->update(color);
    }

}

void TrafficLight::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void TrafficLight::removeObserver(Observer *observer) {

    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if(iterator != observers.end()){
        observers.erase(iterator);
    }

    std::cout << "Se ha removido un observador" << std::endl;
}

void TrafficLight::setState(int color) {

    if(color == 1){
        std::cout << "VERDE" << std::endl;
    }
    else if(color == 0){
        std::cout << "AMARILLO" << std::endl;
    }else if(color == -1){
        std::cout << "ROJO" << std::endl;
    }



    this->color = color;

    notifyObservers();

}