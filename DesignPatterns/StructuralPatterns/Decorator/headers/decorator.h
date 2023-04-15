#ifndef DECORATOR_H
#define DECORATOR_H

#include "coffee.h"

class CoffeeDecorator : public Coffee
{
protected:
	Coffee* coffee;

public:
	CoffeeDecorator(Coffee*);

public:
	double get_cost() override;
	std::string get_name() override;
};

class MilkCoffee : public CoffeeDecorator
{
public:
	MilkCoffee(Coffee*);

public:
	double get_cost() override;
	std::string get_name() override;
};

#endif // DECORATOR_H
