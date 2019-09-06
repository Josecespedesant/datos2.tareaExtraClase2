//
// Created by josecespedes on 5/9/19.
//

#ifndef DATOS2_TAREAEXTRACLASE2_CAR_H
#define DATOS2_TAREAEXTRACLASE2_CAR_H

#include <iostream>

#include "Observer.h"

class Car : public Observer{

    bool puedoAvanzar;

public:

    Car(bool puedoAvanzar);

    virtual void update(int color) override;




};


#endif //DATOS2_TAREAEXTRACLASE2_CAR_H
