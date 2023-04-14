#ifndef EARTH_H
#define EARTH_H

// Earth class to create exactly one instance
class Earth
{
private:
	static Earth* instance;

private:
	Earth();

public:
	static Earth* create_earth();
};

#endif // EARTH_H
