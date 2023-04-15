#include <iostream>

#include "../headers/decorator.h"

int main()
{
	Coffee* coffee = new BlackCoffee();
	Coffee* coffee2 = new MilkCoffee(coffee);
	std::cout << coffee2->get_name() << std::endl;
}
