// Exercise 6.44: ex06: ex06_44.cpp
// what does this program do? 

// multiplication :) 


#include <iostream>
using namespace std;

int mystery(int, int); // function prototype

int main()
	{
		cout << "Enter two integers: "; 
		int x = 0; 
		int y = 0; 
		
		cin >> x >> y; 
		cout << "The result is " << mystery(x, y) << endl; 
		
		
	}
	

// parameter b must be a positive integer to prevent infinite recursion
int mystery(int a, int b)
	{
		if(1 == b)
			{ // base case
				return a; 
				
			}
		else
			{ // recursion step
				return a + mystery(a, b - 1); 	
			}
	}
