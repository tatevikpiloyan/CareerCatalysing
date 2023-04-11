#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

// An abstract Motorcycle class with its attributes
class Motorcycle
{
protected:
	int m_wheel = 2;
	double m_price;

public:
	Motorcycle() = delete;
	Motorcycle(double);

public:
	virtual void ride() = 0;
	virtual void change_price(double) = 0;
};

// Sportbike class inherits from the Motorcycle class to show a specific motorcycle type
class Sportbike : public Motorcycle
{
public:
	Sportbike() = delete;
	Sportbike(double);

public:
	void ride() override;
	void change_price(double) override;
};


// Standart class inherits from the Motorcycle class to show a specific motorcycle type
class Standart : public Motorcycle
{
public:
	Standart() = delete;
	Standart(double);

public:
	void ride() override;
	void change_price(double) override;	
};

#endif // MOTORCYCLE_H
