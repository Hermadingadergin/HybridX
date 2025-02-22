#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include "car.h"

class GasolineCar : public Car
{
public:
	virtual std::string Drive();
	double FuelEfficiency();
	virtual std::string Refuel();
};

#endif