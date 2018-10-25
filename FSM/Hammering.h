#ifndef HAMMERING_H
#define HAMMERING_H
#include "State.h"
#include "Idle.h"

class Hammering : public State
{
public:
	Hammering() { std::cout << "Hammering" << std::endl; };
	~Hammering();
	void idle(Animation* a);
};

#endif
