// Fig. 6.6: fig06_06.cpp and fig06_06.cpp

// Shifted, scaled integers produced by 1 + rand() % 6 

#include <iostream>
#include <iomanip>
#include <cstdlib> // contains function prototype for rand


using namespace std;


int main()
	{
//		// loop 20 times
//		for(unsigned int counter = 1; counter <= 20; ++counter)
//			{
//				// pick random number from 1 to 6 and output it
//				cout << setw(10) << (1 + rand() % 6); 
//				
//				// if counter is divisible by 5, start a new line of output
//				if (counter % 5 == 0)
//					{
//						cout << endl;
//						
//					}
				
		unsigned int frequency1 = 0; // count of 1s rolled 
		unsigned int frequency2 = 0; // count of 2s rolled
		unsigned int frequency3 = 0; // count of 3s rolled
		unsigned int frequency4 = 0; // count of 4s rolled
		unsigned int frequency5 = 0; // count of 5s rolled
		unsigned int frequency6 = 0; // count of 6s rolled

		int face; // stores each roll of the die
		
		// summarize results of 60.000.000 rolls of a die
		for (unsigned int roll{1}; roll <= 60000000; ++roll)
			{
				face = 1 + rand() % 6; // random number from 1 to 6
				
				// determine roll value 1-6 and increment appropriate counter
				switch(face)
					{
						case 1:
							++frequency1; // increment the 1s counter
							break;
						case 2:
							++frequency2; // increment the 2s counter
							break;
						case 3:
							++frequency3; // increment the 3s counter
							break; 
						case 4:
							++frequency4; // increment the 4s counters
							break; 
						case 5:
							++frequency5; // increment the 5s counter
						case 6:
							++frequency6; // increment the 6s counter
							break;
						default:  // invalid value
							cout << "Program should never get here!"; 
	
					}
				
			}
		
				cout << "Face" << setw(13) << "Frequency" << endl; // output headers
				cout << "   1" << setw(13) << frequency1
				   << "\n   2" << setw(13) << frequency2
				   << "\n   3" << setw(13) << frequency3
				   << "\n   4" << setw(13) << frequency4
				   << "\n   5" << setw(13) << frequency5
				   << "\n   6" << setw(13) << frequency6 << endl;			

				
			}	
	
	
	
