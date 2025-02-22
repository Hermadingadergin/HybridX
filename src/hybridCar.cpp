#include "hybridCar.h"
#include <string>

std::string HybridCar::Drive() { // override Drive
	return "Drive HybridCar";
}

std::string HybridCar::Refuel() { // override Refuel
	return "Refuel HybridCar";
}

std::string HybridCar::ChargeBattery() { // override ChargeBattery
	return "ChargeBattery HybridCar";
}

double HybridCar::FuelEfficiency() { // override FuelEfficiency
	return 10;
}

std::string HybridCar::SwitchMode() { // implement SwitchMode
	return "SwitchMode HybridCar";
}