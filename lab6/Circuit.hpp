#ifndef Circuit_hpp
#define Circuit_hpp

#include "Weather.hpp"
#include "Car.hpp"

class Circuit {
    
    float length = 0;
    Weather weather;
    Car* raceCars[100];
    int nrOfCars = 0;
    
public:
    
    void SetLength(float);
    void SetWeather(Weather);
    void AddCar(Car*);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};

#endif
