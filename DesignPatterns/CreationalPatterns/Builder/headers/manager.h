#ifndef MANAGER_H
#define MANAGER_H

#include "chef.h"

// Manager class to set Chef to create wanted product
class Manager
{
private:
	Chef* m_chef;

public:
	Manager() = default;
	void set_chef(Chef*);
	void create();	
};

#endif // MANAGER_H
