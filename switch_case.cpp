#include <iostream>

using namespace std;

int main()
	{
		int numval, number = 0, smallest;
		 
		cout << "Enter the number of values: "; 
		cin >> numval;
		
		int i = 1; 
		
		cin >> number;

		smallest = number;
				

		while(i < numval)
			{
				
				if(number <= smallest)
					{
						smallest = number;
					}
				
				cin >> number;
				
				i++; 
			
			}
		
		cout << "the smallest number is: " << smallest; 
		
		
		
		
	}
