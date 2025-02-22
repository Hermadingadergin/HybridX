#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "car.h"

class ElectricCar : public Car
{
public:
	virtual std::string Drive();
	double FuelEfficiency();
	virtual std::string ChargeBattery();

};
#endif