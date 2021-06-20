#include <iostream>
using namespace std;


unsigned long power(int base, int exponent); // function prototype


int main()
	{
		int base, expon; 
		
		cout << "enter base number and the exponent: "; 
		cin >> base >> expon; 
		
		cout << endl;
		
		cout << "the result is: " << power(base, expon); 
		
		
		
		
	}
	
	
	
unsigned long power(int base, int exponent)
	{
		if (exponent != 0)
			{
				return (base * power(base, exponent - 1)); 
			}
		else
			return 1; 
		
		
	}
