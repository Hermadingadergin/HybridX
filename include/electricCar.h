#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "car.h"

class ElectricCar : public virtual Car
{
public: // list of functions, virtual because they are going to be overridden in derived class
	virtual std::string Drive();
	virtual double FuelEfficiency();
	virtual std::string ChargeBattery();

};
#endif