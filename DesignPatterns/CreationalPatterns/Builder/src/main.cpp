#include <iostream>

#include "../headers/product.h"
#include "../headers/chef.h"
#include "../headers/manager.h"

int main()
{
	Manager product_manager;
	CrepeChef chef;
	product_manager.set_chef(&chef);
	product_manager.create();
}
