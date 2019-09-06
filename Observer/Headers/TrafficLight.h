//
// Created by josecespedes on 5/9/19.
//

#ifndef DATOS2_TAREAEXTRACLASE2_TRAFFICLIGHT_H
#define DATOS2_TAREAEXTRACLASE2_TRAFFICLIGHT_H

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.h"
#include "Observer.h"

class TrafficLight : public Subject{
    std::vector<Observer *> observers;

    int color;

public:

    void registerObserver(Observer *observer) override;
    void removeObserver(Observer *observer) override;
    void notifyObservers() override;

    void setState(int color);

};


#endif //DATOS2_TAREAEXTRACLASE2_TRAFFICLIGHT_H
