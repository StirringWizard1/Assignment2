#include <iostream>
#include "Human.h"


Human::Human()
{}

char Human::makeMove()
{
	
	std::cout << "Enter move: ";
	std::cin >> play; 

	return play;
}