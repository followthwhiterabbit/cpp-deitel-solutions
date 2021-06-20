// dudeney numbers 
#include <iostream>
#include <cmath>
using namespace std;


unsigned long isDudeney(); // function prototype 


int main()
	{
		
		isDudeney(); 
			
	}
	
	

unsigned long isDudeney()
	{
		int number; 
		
		
		for (int i = 1; i<=9; i++)
			{
				number = i; 
				
				if (i == cbrt(i) )
					cout << number << " " << endl; 
				
			}
		
		
		
		for(int i = 1; i <= 9; i++)
			{
				for(int j = 1; j <= 9; j++)
					{
						number = i + 10*j; 
						if (i + j == cbrt(number))
							cout << number << endl; 	
								
					}
			}
		
		
		
		
		
		
		
		for(int i = 1; i <= 9; i++)
			{
				for(int j = 1; j <= 9; j++)
					{
						for(int k = 1; k <= 9; k++)
							{
								number = i + 10*j + 100*k; 
								
								if (i + j + k == cbrt(number))
									cout << number << " " <<  endl; 					
								
							}
					}
			}
		
		
		
		
		
		
		
		
		for(int i = 1; i <= 9; i++)
			{
				for(int j = 1; j <= 9; j++)
					{
						for(int k = 1; k <= 9; k++)
							{
								for(int l = 1; l <= 9; l++)
									{
									number = i + 10*j + 100*k + 1000*l; 					
										
										if (i + j + k + l == cbrt(number))
											cout << number << endl; 
									}
								
							}
	
					}

			}
		
		
		
		
		
		
	}
