#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include "car.h"

class GasolineCar : public virtual Car
{
public:
	virtual std::string Drive();
	virtual double FuelEfficiency();
	virtual std::string Refuel();
};

#endif