#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
	virtual std::string Drive() = 0; // pure virtual, to be overriden in derived classes
	virtual double FuelEfficiency() = 0; // pure virtual, to be overriden in derived classes

};

#endif