//
// Created by victoria on 8/9/19.
//


#ifndef DATOS2_TAREAEXTRACLASE2_FACADE_H
#define DATOS2_TAREAEXTRACLASE2_FACADE_H

//basado en https://stackoverflow.com/questions/249581/explain-facade-pattern-with-c-examplev

#include "Engine.h"
#include "HeadLights.h"

//  Esta es la fachada
class Facade
{

private:
    Engine engine;
    Headlights headlights;

public:
    void TurnIgnitionKeyOn();
};


#endif //DATOS2_TAREAEXTRACLASE2_FACADE_H
