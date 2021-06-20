// funtion template minimum test program 
#include <iostream>
#include "minimum.h" // include definition of function template minimum 

using namespace std;
 
 
int main()
	{
		// demonstrate minimum with int values 
		cout << "input three integer values: "; 
		int int1, int2, int3; 
		
		cin >> int1 >> int2 >> int3; 
		
		
		// invoke int version of maximum 
		cout << "the minimum integer value is: " << minimum(int1, int2, int3); 
		
		
		// demonstrate minimum with double values
		cout << "\n\nInput three double values: "; 
		double double1, double2, double3; 
		cin >> double1 >> double2 >> double3; 
		
		// invoke double version of minimum
		cout << "the minimum double value is: " << minimum(double1, double2, double3); 
		
		
		// demonstrate minimum with char values
		cout << "\n\nInput three characters: "; 
		char char1, char2, char3; 
		cin >> char1 >> char2 >> char3; 
		
		// invoke char version of minimum 
		cout << "the minimum character value is: " << minimum(char1, char2, char3); 
		
		
		
	}
