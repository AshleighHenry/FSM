#include "Climbing.h"


	Climbing::Climbing()
	{
		std::cout << "Climbing" << std::endl;
	}

	Climbing::~Climbing()
	{
	}
		
	void Climbing::idle(Animation * a)
	{
		std::cout << "Climbing to Idle" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}

