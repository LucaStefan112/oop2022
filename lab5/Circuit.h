#pragma once
#include "Car.h"
#include "Weather.h"

class Circuit
{
	Car** cars = new Car* [100];
	int numberOfCars = 0;
	Weather weather;
	float length = 0;

public:
	void SetLength(float thisLength);
	void SetWeather(Weather thisWeather);
	void AddCar(Car* thisCar);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

