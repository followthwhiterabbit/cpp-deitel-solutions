#include <iostream>
using namespace std;

// function square for int values
int square(int x)
	{
		cout << "square of integer " << x << " is "; 
		return x * x; 
	}
	
// function square for double values
double square(double y)
	{
		cout << "square of double " << y << " is "; 
		return y * y; 
	}
	
	
// function that receives arguments of types
// int, float, char and &int 
void nothing1(int a, float b, char c, int& d)
	{
	}

// function that receives arguments of types
// char, int, float& and double&
int nothing2(char a, int b, float& c, double& d)
	{
	return 0;	
	}	
		

	
	
	
	int main()
		{
			
//			cout << square(7); // calls int version
//			cout << endl;
//			cout << square(7.5); // calls double version
//			cout << endl;
			
			
			
			
			
			
		}
	
