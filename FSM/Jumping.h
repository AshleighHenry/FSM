#ifndef JUMPING_H
#define JUMPING_H
#include "State.h"
#include "Idle.h"
class Jumping : public State
{
public:
	Jumping() { std::cout << "Jumping" << std::endl; };
	~Jumping() {};
	
	void idle(Animation * a);
};
#endif