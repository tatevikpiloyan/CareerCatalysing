#ifndef PRODUCT_H
#define PRODUCT_H

#include <vector>

struct Pepperoni
{
	double m_crust;
	std::vector<std::string> m_sauce;
	std::vector<std::string> m_topping;

public:
	Pepperoni();
};

struct Crepe
{
	double m_crust;
	std::vector<std::string> m_filling;
	std::vector<std::string> m_topping;

public:
	Crepe();
};

#endif // PRODUCT_H
