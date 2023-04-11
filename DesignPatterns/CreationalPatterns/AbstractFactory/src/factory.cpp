#include "../headers/factory.h"

Car* SportFactory::create_car(double price)
{
	return new Sport(price);
}

Motorcycle* SportFactory::create_motorcycle(double price)
{
	return new Sportbike(price);
}

Car* StandartFactory::create_car(double price)
{
	return new Jeep(price);
}

Motorcycle* StandartFactory::create_motorcycle(double price)
{
	return new Standart(price);
}
