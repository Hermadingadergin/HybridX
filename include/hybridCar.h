#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "gasolineCar.h"
#include "electricCar.h"

class HybridCar : public GasolineCar, public ElectricCar
{
public:
	std::string Drive();
	std::string ChargeBattery();
	std::string SwitchMode();
	std::string Refuel();
	double FuelEfficiency();
};
#endif