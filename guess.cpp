// guess the number game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int random(); // function prototype 


int main()
	{
		int guessed, thenumber_returned; 
		char again; 
		
		
		
jump: 
		thenumber_returned = random(); 
		
		cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."; 
		
		cout << endl; 
		
		
	do 	{
	
		
		
		
		cin >> guessed; 
		
		
			
			
				if (guessed == thenumber_returned)
					{
						cout << "Excellent! You guessed the number!\nWould you like to play again(y or n)?"; 
						
						cin >> again; 
						
						if (again == 'y')
							{
								goto jump; 
							} 
						else
							{
								break; 
							}
						

					}
				if (guessed < thenumber_returned)
					{
						cout << "enter a higher number\n"; 
					}
				if (guessed > thenumber_returned)
					{
						cout << "enter a lower number\n"; 
					}
					
			}while(guessed != thenumber_returned); 

		
	}
	
	
int random()
	{
		int randnum; 
		srand(time(0)); // seed random number generator
		randnum = rand() % 1000 + 1; //random number between 1 and 1000
		
		return randnum; 
	}
