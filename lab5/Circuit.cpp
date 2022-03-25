#include "Circuit.h"
#include "Weather.h"
#include <iostream>

void Circuit::SetLength(float thisLength)
{
	length = thisLength;
}

void Circuit::SetWeather(Weather thisWeather)
{
	weather = thisWeather;
}

void Circuit::AddCar(Car* thisCar)
{
	if (numberOfCars == 100)	return;
	cars[numberOfCars] = thisCar;
	cars[numberOfCars]->id = numberOfCars++;
}

void Circuit::Race()
{
	std::cout << "The cars are racing!";
}

void Circuit::ShowFinalRanks()
{
	std::cout << "Final results: ";

	for (int i = 0; i < numberOfCars - 1; i++)
		for (int j = i + 1; j < numberOfCars; j++)
			if (cars[i]->average_speed_rain < cars[j]->average_speed_rain)
				std::swap(cars[i], cars[j]);

	for (int i = 0; i < numberOfCars; i++)
		std::cout << cars[i]->id << ' ';
}

void Circuit::ShowWhoDidNotFinish()
{
	std::cout << "Cars that did not finish: ";

	for (int i = 0; i < numberOfCars; i++)
		if (length - cars[i]->fuel_capacity / cars[i]->fuel_consumption * 100 > 0)
			std::cout << cars[i]->id << ' ';
}
