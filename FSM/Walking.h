
#ifndef WALKING_H
#define WALKING_H
#include "State.h"
#include "Idle.h"
class Walking
{
public:
	Walking() { std::cout << "Walking" << std::endl; };
	~Walking();
	void idle(Animation * a);
};
#endif