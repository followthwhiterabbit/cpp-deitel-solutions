// hypotenuse calculateions 

#include <iostream>
#include <cmath>
using namespace std; 

double hypotenuse(double side1, double side2)
	{
		double hypo;
		 
		hypo = sqrt(side1 * side1 + side2 * side2); 
		
		return hypo; 
		
	}




int main()
	{
		double s1, s2, res; 
		
		cout << "Enter two sides of the triangle: "; 

		cin >> s1 >> s2; 
		
		res = hypotenuse(s1, s2); 
		
		cout << "the result is: " << res; 		
		
	}
