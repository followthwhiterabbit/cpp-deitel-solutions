#include <iostream>
using namespace std;


int main()
	{
		int counter = 1;
		int number;
		int largest;
		
		cout << "Enter the number: "; 
		cin >> number;
		
		largest = number;
				
		
		while(counter <= 10)
			{
				
			if (number >= largest)
				{
					largest = number;
				}
				
				
			cout << "Enter the number: ";
			cin >> number;
				
			counter = counter + 1;	
				
			}
		
		
		cout << "the largest is: " << largest; 
		
		
		
	}
