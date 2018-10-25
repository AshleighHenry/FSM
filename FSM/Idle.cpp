#include "Idle.h"

void Idle::climbing(Animation * a)
{
	std::cout << "idle to Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}

void Idle::jumping(Animation* a)
{
	std::cout << "idle to jumping " << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
