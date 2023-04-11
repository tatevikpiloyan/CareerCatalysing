#ifndef CARS_H
#define CARS_H

// An abstract Car class with its attributes
class Car
{
protected:
	int m_wheel = 4;
	double m_price;

public:
	Car() = delete;
	Car(double);

public:
	virtual void ride() = 0;
	virtual void change_price(double) = 0;
};


// Jeep class inherits from the Car class to show a specific car type
class Jeep : public Car
{
public:
	Jeep() = delete;
	Jeep(double);

public:
	void ride() override;
	void change_price(double) override;
};

// Jeep class inherits from the Car class to show a specific car type
class Sport : public Car
{
public:
	Sport() = delete;
	Sport(double);

public:
	void ride() override;
	void change_price(double) override;
};

#endif // CARS_H
