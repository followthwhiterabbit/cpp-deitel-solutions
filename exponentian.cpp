#include <iostream>

using namespace std;

unsigned long integerPower(int, int); // function prototype, we do not need to give names to the parameters, we just declare the types of the arguments

int main()
	{
	 int base_val, expon; 
	 
	 cout << "insert the base and exponent value: "; 
	 cin >> base_val >> expon; 
	 
	 
	 cout << endl; 
	 cout << "the result is: " << integerPower(base_val, expon); 
	 	
		
	}


unsigned long integerPower(int base, int exponent) // we declare the types and the names of the arguments 
	{
		unsigned long result = 1; 
		
		for(int counter = 1; counter <= exponent; ++counter)
			{
				
			result *= base; 
				
			}
		
		return result; 
		
	}

