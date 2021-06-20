// greatest common divisor(GCD): the largest integer that evenly divides each of the numbers 
// write a function gcd that returns the largest common divisor of two integers 
 
#include <iostream>

using namespace std;



int gcd(int a, int b); // function prototype




int main()
	{
		int n1, n2; 
		cout << "enter the two integers: "; 				
		cin >> n1 >> n2; 
		
		gcd(n1, n2); 
		
		cout << "GCD is: " << gcd(n1, n2); 
		
	}
	
	
int gcd(int a, int b)
	{
		if (a == 0 || b == 0) // if a or b equals to zero, return 0 
			{
				return 0; 
			}
		else if (a == b) // if a equals to b, return a 
			return a; 
		else if (a > b)   // if a is greater than b, return to the function gcd(a-b, b) 
			return gcd(a - b, b); 
		else return gcd(a, b -a ); // if b is greater than a, return to the function gcd(a, b -a)
		
	}
	
		
	
