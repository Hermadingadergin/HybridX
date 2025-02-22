#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "car.h"

class ElectricCar : public virtual Car
{
public:
	virtual std::string Drive();
	virtual double FuelEfficiency();
	virtual std::string ChargeBattery();

};
#endif