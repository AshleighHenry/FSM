#ifndef CLIMBING_H
#define CLIMBING_H

#include "State.h"
#include "Idle.h"
class Climbing : public State // i'm a public state
{
public:
	Climbing();
	~Climbing();
	void idle(Animation* a);

private:

};
#endif