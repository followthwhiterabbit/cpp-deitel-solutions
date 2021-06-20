// Find the minimum 

#include <iostream>
using namespace std;

double min(double, double, double); // function prototype


int main()
	{
		double a, b, c; 
		
		cout << "input three double precision numbers: "; 
		cin >> a >> b >> c; 
		
		cout << "minimum of the numbers is: "  << min(a, b, c); 
		
	}
	
	double min(double a, double b, double c)
		{
			if (a < b && a < c)
				{
					return a; 
				}
			else if (b < a && b < c)
				{
					return b; 
				}
			else
				return c; 
			
		}
