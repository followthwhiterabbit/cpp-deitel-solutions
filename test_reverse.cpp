// reversing the digits 
#include <iostream>

using namespace std;


void  reverseDigits(int); // function prototype 



int main()
	{
		int number;
		cout << "enter the integer value: "; 
		cin >> number; 
		
		reverseDigits(number); 
		
	}
	
	
void reverseDigits(int n)
	{
		while(n > 0)
			{
				cout << n % 10; 
				n = n / 10; 
				
			}
		
	}

