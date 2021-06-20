// factorial with recursive 

#include <iostream>
using namespace std;

int factorial_fcn(int number); 

int main()
	{
		int number; 
		cout << "enter the number: "; 
		cin >> number;
		
		cout << "the factorial of " << number << " is " << factorial_fcn(number); 
		
	}



factorial_fcn(int number)
	{
		if (number > 1)
			{
				return number * factorial_fcn(number - 1); 
			}
		else
			{
				return 1;
			}
		
		
		
	}



	
