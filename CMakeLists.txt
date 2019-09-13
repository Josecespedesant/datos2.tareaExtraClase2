cmake_minimum_required(VERSION 3.14)
project(datos2_tareaExtraClase2)

set(CMAKE_CXX_STANDARD 14)

add_executable(datos2_tareaExtraClase2 main.cpp Observer/Headers/Subject.h Observer/Headers/Observer.h Observer/Sources/TrafficLight.cpp Observer/Headers/TrafficLight.h Observer/Sources/Car.cpp Observer/Headers/Car.h Facade/Facade.cpp Facade/Facade.h Facade/Main.cpp Facade/HeadLights.h Facade/Engine.h)