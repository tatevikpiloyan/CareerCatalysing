#include <iostream>

#include "../headers/decorator.h"

CoffeeDecorator::CoffeeDecorator(Coffee* coffee)
{
	this->coffee = coffee;
}

double CoffeeDecorator::get_cost()
{
	return this->coffee->get_cost();
}

std::string CoffeeDecorator::get_name()
{
	return this->coffee->get_name();
}

MilkCoffee::MilkCoffee(Coffee* coffee) : CoffeeDecorator(coffee)
{
}

double MilkCoffee::get_cost()
{
	return this->coffee->get_cost() + 1.0;
}

std::string MilkCoffee::get_name()
{
	return this->coffee->get_name() + ", with milk";
}
