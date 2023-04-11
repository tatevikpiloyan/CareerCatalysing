#include <iostream>
#include <string>

#include "../headers/car.h"

Car::Car(double price) : m_price(price)
{
}

Jeep::Jeep(double price) : Car(price)
{
}

void Jeep::ride()
{
	std::cout << "Jeep is riding!" << std::endl;
}

void Jeep::change_price(double price)
{
	this->m_price = price;
}

Sport::Sport(double price) : Car(price)
{
}

void Sport::ride()
{
	std::cout << "Sport car is riding!" << std::endl;
}

void Sport::change_price(double price)
{
	this->m_price = price;
}
