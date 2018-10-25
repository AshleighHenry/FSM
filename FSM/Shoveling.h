#ifndef SHOVELING_H
#define SHOVELING_H
#include "State.h"
#include "Idle.h"
class Shoveling
{
public:
	Shoveling() { std::cout << "Shoveling" << std::endl; };
	~Shoveling();
	void idle(Animation *a);
};

#endif