#include "electricCar.h"
#include <string>

std::string ElectricCar::Drive() { // override Drive
	return "Drive ElectricCar";
}

double ElectricCar::FuelEfficiency() { // override FuelEfficiency
	return 10;
}

std::string ElectricCar::ChargeBattery() { // implement ChargeBattery
	return "ChargeBattery ElectricCar";
}