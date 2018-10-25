#ifndef SWORDSMANSHIP_H
#define SWORDSMANSHIP_H
#include "State.h"
#include "Idle.h"
class Swordsmanship
{
public:
	Swordsmanship() { std::cout << "Sword fighting?" << std::endl; };
	~Swordsmanship();
	void idle(Animation *a);
};
#endif
