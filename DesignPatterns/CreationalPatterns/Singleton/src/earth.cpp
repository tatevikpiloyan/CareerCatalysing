#include <iostream>

#include "../headers/earth.h"

Earth* Earth::instance = nullptr;

Earth::Earth()
{
}

Earth* Earth::create_earth()
{
	if (!instance)
	{
		instance = new Earth();
	}
	return instance;
}
