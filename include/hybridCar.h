#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "gasolineCar.h"
#include "electricCar.h"
#include "car.h"

class HybridCar : public GasolineCar, public ElectricCar, public Car
{
public:
	std::string Drive();
	std::string ChargeBattery();
	std::string SwitchMode();
	std::string Refuel();
	std::string FuelEfficiency;
};
#endif