
#ifndef IDLE_H
#define IDLE_H
#include "State.h"
#include "Idle.h"
class Idle : public State
{
public:
	Idle() { std::cout << "Idling" << std::endl; };
	~Idle() {};
	void climbing(Animation* a);
	void jumping(Animation* a);

};
#endif