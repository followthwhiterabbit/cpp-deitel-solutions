// calling template function maximum with two arguments

#include <iostream>
#include "maximum2arg.h"
using namespace std;


int main()
	{
		// demonstrating integer arguments
		int inta, intb; 
		cin >> inta >> intb; 
		
		cout << "the maximum value is: " << maximum(inta, intb); 
		
		cout << endl; 
		
		// demomstrating character arguments
		char chara, charb; 
		cin >> chara >> charb; 
		
		cout << "the maximum value is: " << maximum(chara, charb); 
		
		cout << endl; 
		
		
		// demostrating double arguments
		double doublea, doubleb; 
		cin >> doublea >> doubleb; 
		
		cout << "the maximum value is: " << maximum(doublea, doubleb); 
		
		
		
		
		
	}
