#include "Swordsmanship.h"

Swordsmanship::~Swordsmanship()
{
}

void Swordsmanship::idle(Animation *a)
{
	std::cout << "Swording to Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}