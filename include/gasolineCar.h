#ifndef GASOLINECAR_H
#define GASOLINECAR_H

#include "car.h"

class GasolineCar : public virtual Car
{
public: // list of functions, virtual because they are going to be overridden in derived class
	virtual std::string Drive();
	virtual double FuelEfficiency();
	virtual std::string Refuel();
};

#endif