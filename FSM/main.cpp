#include "Animation.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
int main()
{
	// creating a class of animition, which contains the states the "sprite" can be in as subclasses
	bool run = true;
	Animation fsm; 
	int input = 0;
	std::cout << "Select what you would like to do \n 1: Do Nothing \n 2: Climb \n 3: Jump \n 4: Walking \n 5: Shoveling\n 6: Hammering \n 7:Swordsmanship "<< std::endl;

	while (run)
	{
		std::cin >> input;
		if (input == 1)
		{
			// Do Nothing AKA player model runs through idle animation
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			
		}
		else if (input == 2) // climb has been selected
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			
		}
		else if(input == 3) // jump has been selected
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			
		}
		else if (input == 4)
		{
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			
		}
		else if (input == 5)
		{
			fsm.shoveling();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		else if (input == 6)
		{
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			
		}
		else if (input == 7)
		{
			fsm.swordsmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		else
		{
			std::cout << "Enter Valid Option" << std::endl;
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
	}
	
	return 0;
}