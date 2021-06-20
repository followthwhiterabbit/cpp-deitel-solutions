// circle area program 
#include <iostream>

using namespace std;

inline double circleArea(int); // function prototype


int main()
	{
		int rad; 
		
		cout << "enter the radius of the circle: "; 
		
		cin >> rad; 
		
		cout << "the are of the circle is: " << circleArea(rad); 
		
		
	}
	
	
inline double circleArea(int radius)
	{
		double area; 
		
		area = 3.14 * radius * radius; 
		
		return area; 
		
	}
