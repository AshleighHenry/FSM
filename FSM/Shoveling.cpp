#include "Shoveling.h"


Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Shovelling to Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
