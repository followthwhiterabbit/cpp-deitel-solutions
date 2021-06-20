// assigning random integers to the variables

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 


int main()
	{
		int iSecret; 
		
		// initialize random seed
		srand(time(NULL));
		 
		 
		 
		 for(int counter = 1; counter <= 5; ++counter)
		 	{
		 		
				 // generate secret number between 1 and 10
		 		iSecret = rand() % 16 - 3;   
		
				cout << iSecret << " ";   
		
			 }
		
	}
