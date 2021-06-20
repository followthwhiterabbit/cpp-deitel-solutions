// calculating the number of minutes 

#include <iostream>

using namespace std;


int calcMin(int, int, int); // function prototype




int main()
	{
		int days = 0, hours = 0, minutes = 0; 
		
		cout << "enter: (days)(hours)(minutes)"; 
		
		cin >> days >> hours >> minutes; 
		
		
		cout << "the result is: " << calcMin(days, hours, minutes); 
			
		
	}
	
	
	int calcMin(int days, int hours, int minutes)
		{
			int result; 
			
			result = minutes + hours * 60 + days * 24 * 60; 
			
			return result;
			
		}
	
	 
	
	
	
	
	
	
	
