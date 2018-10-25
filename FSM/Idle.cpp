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

void Idle::walking(Animation * a)
{
	std::cout << "idle to Walking " << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::swordsmanship(Animation * a)
{
	std::cout << "idle to swording " << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::shoveling(Animation * a)
{
	std::cout << "idle to shoveling " << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "idle to hammering " << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
