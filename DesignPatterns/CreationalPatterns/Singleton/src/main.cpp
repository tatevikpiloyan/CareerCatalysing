#include <iostream>

#include "../headers/earth.h"

int main()
{
	Earth* earth1 = Earth::create_earth();
	Earth* earth2 = Earth::create_earth();
	std::cout << "Address1: " << earth1 << std::endl;
	std::cout << "Address2: " << earth2 << std::endl;
}
