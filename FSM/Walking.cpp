#include "Walking.h"

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "Walking to Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}