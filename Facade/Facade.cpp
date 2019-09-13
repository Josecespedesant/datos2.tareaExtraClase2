//
// Created by victoria on 8/9/19.
//

#include "Facade.h"


    void Facade::TurnIgnitionKeyOn()
    {
        headlights.TurnOn();
        engine.Start();
    }


