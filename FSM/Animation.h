#ifndef ANIMATION_H
#define ANIMATION_H

class State;
class Animation
{
	class State* current;
public:
	Animation();
	
	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
};
#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Idle.h"

#endif