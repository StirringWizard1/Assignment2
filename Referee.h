#ifndef REFEREE_H
#define REFEREE_H

#include "Referee.h"
#include "Computer.h"
#include "Human.h" 

class Referee
{
private: 
	char move;
	char player;
	char Comp; 

public: 
	Referee(); 
	char refGame(Human PH1, Computer PH2);

};

#endif