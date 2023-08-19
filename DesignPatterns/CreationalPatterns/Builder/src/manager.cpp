#include <iostream>

#include "../headers/manager.h"

void Manager::set_chef(Chef* chef)
{
	this->m_chef = chef;
}

void Manager::create()
{
	this->m_chef->reset();
	this->m_chef->make_dough();
	this->m_chef->add_sauce();
	this->m_chef->add_topping();
}
