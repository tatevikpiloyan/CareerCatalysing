#include <iostream>

#include "../headers/manager.h"

void Manager::set_chef(Chef* chef)
{
	this->m_chef = chef;
}

void Manager::create_pizza()
{
	this->m_chef->reset();
	this->m_chef->make_dough();
	this->m_chef->add_source();
	this->m_chef->add_topping();
}

void Manager::create_crepe()
{
	this->m_chef->reset();
	this->m_chef->make_dough();
	this->m_chef->add_source();
	this->m_chef->add_topping();
}
