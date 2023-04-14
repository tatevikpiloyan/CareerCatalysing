#ifndef CHEF_H
#define CHEF_H

#include "product.h"

// Chef class with consecutive functions to make product
class Chef
{
public:
	virtual ~Chef();

public:
	virtual void reset() = 0;
	virtual void make_dough() = 0;
	virtual void add_sauce() = 0;
	virtual void add_topping() = 0;

protected:
	virtual void delete_helper() = 0;
};

// PepperoniChef class to create pizzas, inherits from Chef class
class PepperoniChef : public Chef
{
private:
	Pepperoni* m_pizza;

public:
	PepperoniChef();
	void reset() override;
	void make_dough() override;
	void add_sauce() override;
	void add_topping() override;
	~PepperoniChef();

private:
	void delete_helper() override;
};

// CrepeChef class to create crepes, inherits from Chef class
class CrepeChef : public Chef
{
private:
	Crepe* m_crepe;

public:
	CrepeChef();
	void reset() override;
	void make_dough() override;
	void add_sauce() override;
	void add_topping() override;
	~CrepeChef();

private:
	void delete_helper() override;
};

#endif // CHEF_H
