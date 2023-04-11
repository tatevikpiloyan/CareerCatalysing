#include <iostream>
#include <string>

#include "../headers/motorcycle.h"

Motorcycle::Motorcycle(double price) : m_price(price)
{
}

Sportbike::Sportbike(double price) : Motorcycle(price)
{
}

void Sportbike::ride()
{
	std::cout << "Sportbike is riding!" << std::endl;
}

void Sportbike::change_price(double price)
{
	this->m_price = price;
	std::cout << "Sportbikes price is changing!" << std::endl;
}

Standart::Standart(double price) : Motorcycle(price)
{
}

void Standart::ride()
{
	std::cout << "Standart is riding!" << std::endl;
}

void Standart::change_price(double price)
{
	this->m_price = price;
	std::cout << "Standarts price is changing!" << std::endl;
}
