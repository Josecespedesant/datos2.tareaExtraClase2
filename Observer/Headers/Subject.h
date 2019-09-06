/**
 * Tomado de https://medium.com/@gayashanbc/explore-the-observer-design-pattern-with-c-8592459b0486
 */

#ifndef DATOS2_TAREAEXTRACLASE2_SUBJECT_H
#define DATOS2_TAREAEXTRACLASE2_SUBJECT_H

#include "Observer.h"

class Subject{

public:

    virtual void registerObserver(Observer *observer) = 0;

    virtual void removeObserver(Observer *observer) = 0;

    virtual void notifyObservers() = 0;

};


#endif //DATOS2_TAREAEXTRACLASE2_SUBJECT_H
