// calling the function sum 

#include <iostream>
#include "sum.h"
using namespace std;


int main()
	{
		cout << "enter three numbers: "; 
		int a, b, c; 
		cin >> a >> b >> c; 
		
		cout << sum(a, b, c);  

	}
