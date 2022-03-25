#pragma once
class Car
{
public:
	float fuel_capacity, fuel_consumption, 
				average_speed_rain, average_speed_sunny, average_speed_snow;

	int id;

	virtual void SetCarStats() = 0;
};

