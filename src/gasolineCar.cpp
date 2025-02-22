#include "gasolineCar.h"
#include <string>

std::string GasolineCar::Drive() { // override Drive
	return "Drive GasolineCar";
}

double GasolineCar::FuelEfficiency() { // override FuelEfficiency
	return 10;
}

std::string GasolineCar::Refuel() { // implement Refuel
	return "Refuel GasolineCar";
}