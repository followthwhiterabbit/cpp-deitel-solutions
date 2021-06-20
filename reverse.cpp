// reverse the digits
#include <iostream>

using namespace std;


void reverseDigits(int ); 

int main()
	{
		int number; 
		cin >> number;
		
		reverseDigits(number); 
		
		
	}
	
void reverseDigits(int n)
	{
		
			cout << n % 10; 
			n = n /10; 
			cout << n % 10; 
			n = n/ 10; 
			cout << n % 10; 
			n = n/ 10; 
			cout << n % 10;	
			
			
			 
			
			
	}
