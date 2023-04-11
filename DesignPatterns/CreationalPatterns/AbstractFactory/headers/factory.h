#ifndef FACTORY_H
#define FACTORY_H

#include "car.h"
#include "motorcycle.h"


// An interface Factory class with possibilty to create Cars and Motorcycles
class Factory
{
public:
	virtual Car* create_car(double) = 0;
	virtual Motorcycle* create_motorcycle(double) = 0;
};

// SportFactory class to create sport type of transport, inherits from Factory interface class
class SportFactory : public Factory
{
	Car* create_car(double) override;
	Motorcycle* create_motorcycle(double) override;
};


// StandartFactory class to create standart type of transport, inherits from Factory interface class
class StandartFactory : public Factory
{
	Car* create_car(double) override;
	Motorcycle* create_motorcycle(double) override;
};

#endif // FACTORY_H
