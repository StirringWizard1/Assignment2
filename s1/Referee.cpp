#include "Referee.h"
#include "Computer.h"
#include "Human.h"


Referee::Referee()
{}

char Referee::refGame(Human PH1, Computer PH2)
{
	player = PH1.makeMove();
	Comp = PH2.makeMove(); 
	char move; 

	switch (player){

		case 'R':
		if (Comp == 'R')
		{
			move = 'T'; 
		}
		else if (Comp == 'S')
		{
			move = 'W';
		}
		else if (Comp =='P')
		{
			move = 'L';
		}
		break; 
		case 'S':
				if (Comp == 'S')
		{
			move = 'T'; 
		}
		else if (Comp == 'P')
		{
			move = 'W';
		}
		else if (Comp =='R')
		{
			move = 'L';
		}
		break; 
		case 'P':
				if (Comp == 'P')
		{
			move = 'T'; 
		}
		else if (Comp == 'R')
		{
			move = 'W';
		}
		else if (Comp =='S')
		{
			move = 'L';
		}

	}
	return move ; 

}