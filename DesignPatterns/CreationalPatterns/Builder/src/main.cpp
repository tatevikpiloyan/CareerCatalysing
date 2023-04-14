#include <iostream>

#include "../headers/product.h"
#include "../headers/chef.h"
#include "../headers/manager.h"

int main()
{
	Manager person;
	CrepeChef chef;
	person.set_chef(&chef);
}
