// Separating Digits

#include <iostream>
using namespace std;


void seperateDigits(int); 



int main()
	{
		int number; 
		cout << "enter the number you wnat to seperate the digits: "; 
		
		cin >> number; 
		
		cout << "seperated number is: "; 
		
		seperateDigits(number); 
		
		
	}
	
	
	void seperateDigits(int number)
		{
			int a, b, c, d, e; 
			for(int counter = 1; counter <= 5; counter++)
				{
					if (number > 10000)
						{
					
							a = number % 10;     	
						 	number = number / 10; 
				 			b = number % 10; 
				 			number = number / 10; 
				 			c = number % 10;
				 			number = number / 10; 
				 			d = number % 10; 
				 			number = number / 10; 
				 			e = number % 10; 
				 			
				 			cout << e << " "; 
				 			cout << d << " ";  			
				 			cout << c << " "; 
				 			cout << b << " "; 
				 			cout << a << " "; 
				 			
				 			break; 
							
						}
					if (number > 1000 && number < 9999)
						{
							a = number % 10;     	
						 	number = number / 10; 
				 			b = number % 10; 
				 			number = number / 10; 
				 			c = number % 10;
				 			number = number / 10; 
				 			d = number % 10; 
				 			
				 			cout << d << " "; 
				 			cout << c << " ";  			
				 			cout << b << " "; 
				 			cout << a << " "; 
				 			
				 			break; 
				 			
						}
					if (number > 100 && number < 999)
						{
							a = number % 10;     	
						 	number = number / 10; 
				 			b = number % 10; 
				 			number = number / 10; 
				 			c = number % 10;
				 			
							 cout << c << " "; 
							 cout << b << " "; 
							 cout << a << " "; 
							 
							 break; 
							 							

							
						}
					if (number > 10 && number < 100)
						{
							a = number % 10;     	
						 	number = number / 10; 
				 			b = number % 10; 
				 			
				 			cout << b << " "; 
				 			cout << a << " "; 
				 			
				 			break; 
				 			
							
						}
					if (number > 1 && number < 10)
						{ 
				 		
							a = number % 10;
							cout << a << " ";  
							
							break; 
						}
					
				
				
				
				
				
				
									 	
				 	 
				 	
					
				}
				
			
		}
