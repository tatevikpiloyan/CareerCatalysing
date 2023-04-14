#include <iostream>

#include "../headers/chef.h"

Chef::~Chef()
{
}

PepperoniChef::PepperoniChef() : m_pizza{}
{
}

void PepperoniChef::reset()
{
	if (this->m_pizza)
	{
		this->delete_helper();
	}
	this->m_pizza = new Pepperoni();
}

void PepperoniChef::make_dough()
{
	this->m_pizza->m_crust = 10;
}

void PepperoniChef::add_sauce()
{
	this->m_pizza->m_sauce.push_back("tomato");
}

void PepperoniChef::add_topping()
{
	this->m_pizza->m_topping.push_back("pepperoni");
}

void PepperoniChef::delete_helper()
{
	if (this->m_pizza)
	{
		delete this->m_pizza;
		this->m_pizza = nullptr;
	}
}

PepperoniChef::~PepperoniChef()
{
	if (this->m_pizza)
	{
		this->delete_helper();
	}
}

CrepeChef::CrepeChef() : m_crepe{}
{
}

void CrepeChef::reset()
{
	if (this->m_crepe)
	{
		this->delete_helper();
	}
	this->m_crepe = new Crepe();
}

void CrepeChef::make_dough()
{
	this->m_crepe->m_crust = 0.1;
}

void CrepeChef::add_sauce()
{
	this->m_crepe->m_filling.push_back("chocolate");
}

void CrepeChef::add_topping()
{
	this->m_crepe->m_topping.push_back("banana");
	this->m_crepe->m_topping.push_back("strawberry");
}

void CrepeChef::delete_helper()
{
	if (this->m_crepe)
	{
		delete this->m_crepe;
		this->m_crepe = nullptr;
	}
}

CrepeChef::~CrepeChef()
{
	if (this->m_crepe)
	{
		this->delete_helper();
	}
}
