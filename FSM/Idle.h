
#ifndef IDLE_H
#define IDLE_H
#include "State.h"

class Idle : public State
{
public:
	Idle() { std::cout << "Idling" << std::endl; };
	~Idle() {};
	void climbing(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void swordsmanship(Animation* a);
	void shoveling(Animation* a);
	void hammering(Animation* a);

};
#endif