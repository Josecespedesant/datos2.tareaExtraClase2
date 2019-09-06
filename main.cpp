#include <iostream>
#include <chrono>
#include <thread>

#include "Observer/Headers/Car.h"
#include "Observer/Headers/TrafficLight.h"
#include "time.h"

int main() {

    TrafficLight semaforo;

    int rojo = -1;
    int amarillo = 0;
    int verde = 1;

    Car toyota(true), honda(true), ford(true);

    std::chrono::milliseconds timespan(1000);
    std::chrono::milliseconds timespan2(9000);


    semaforo.registerObserver(&toyota);
    semaforo.registerObserver(&honda);
    semaforo.registerObserver(&ford);

    std::this_thread::sleep_for(timespan);

    std::cout << "Viene un semáforo" << std::endl;

    std::this_thread::sleep_for(timespan);

    semaforo.setState(amarillo);

    std::this_thread::sleep_for(timespan);

    semaforo.setState(rojo);

    std::this_thread::sleep_for(timespan2);

    semaforo.setState(verde);

    semaforo.removeObserver(&toyota);
    semaforo.removeObserver(&honda);
    semaforo.removeObserver(&ford);

    return 0;
}