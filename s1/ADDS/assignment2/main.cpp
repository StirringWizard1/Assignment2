#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

int main()
{

char result; 

Human P1;
Computer P2; 
Referee ref; 


result = ref.refGame(P1,P2); 

std::cout << result << std::endl; 

return 0; 
}
