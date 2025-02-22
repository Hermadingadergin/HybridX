#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "gasolineCar.h"
#include "electricCar.h"

class HybridCar : public GasolineCar, public ElectricCar
{
public: // listing all of the functions to override or implement
	std::string Drive();
	std::string ChargeBattery();
	std::string SwitchMode();
	std::string Refuel();
	double FuelEfficiency();
};
#endif