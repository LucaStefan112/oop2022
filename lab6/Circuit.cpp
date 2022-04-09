#include "Circuit.hpp"
#include <iostream>

void Circuit::SetLength(float thisLength){
    length = thisLength;
}

void Circuit::SetWeather(Weather thisWeather){
    weather = thisWeather;
}

void Circuit::AddCar(Car* newCar){
    raceCars[nrOfCars++] = newCar;
}

void Circuit::Race(){
    std::cout << "vroom - vroom...\n";
}

void Circuit::ShowFinalRanks(){
    std::cout << "Sike, everybody won!\n";
}

void Circuit::ShowWhoDidNotFinish(){
    std::cout << "Except number 0. He is actually a tortoise...\n";
}
