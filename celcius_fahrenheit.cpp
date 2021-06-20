// Celcius and Fahrenhait temperatures

#include <iostream>
using namespace std;

int celcius(int F); // function prototype
int fahrenheit(int C); // function prototype

int main()
	{		

	for(int counter = 1; counter <= 100; counter++)
		{
					
							
			cout << counter << " F" << " = " << celcius(counter) <<  "\t" << counter << " C = " << fahrenheit(counter) << endl; 
				
		}
		 	
		 	
		
	}
	
	
	int celcius(int F)
		{
			int C; 
			
			C = (F - 32) * 5/9; 
			
			return C; 
			
		}
		
		
	int fahrenheit(int C)
		{
			int F; 
			
			F = (C + 9/5) + 32; 
			
			return F; 
			
		}
	
