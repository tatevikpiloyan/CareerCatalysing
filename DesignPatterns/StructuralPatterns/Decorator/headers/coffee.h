#ifndef COFFEE_H
#define COFFEE_H

class Coffee
{
public:
	virtual double get_cost() = 0;
	virtual std::string get_name() = 0;
};

class BlackCoffee : public Coffee
{
public:
	double get_cost() override;
	std::string get_name() override;
};

#endif // COFFEE_H
