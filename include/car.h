#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
	virtual std::string Drive() = 0;
	virtual double FuelEfficiency() = 0;

};

#endif