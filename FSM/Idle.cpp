#include "Idle.h"

void Idle::climbing(Animation * a)
{
	std::cout << "idle to Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}
