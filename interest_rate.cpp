#include <iostream>

using namespace std;


int main()
	{

		long double principle = 24.00; 
		long  double new_principle; 
		long double pow = 1.00; 
		
		cout << "principle is: " << principle << "\n\n"; 
		
		for (int r = 5; r <= 10; r++)
			{
				cout << "EVERY YEAR: " << "%" << r << " ";  
				for(int t = 1 ; t <= 30; t++)
					{
						for(int i = 1; i <= t; i++)
							{
								pow = pow * (1.00 + static_cast<double>(r)/100);  				
								
							}
						
						new_principle = pow * principle; 
						cout << " " <<  new_principle << " ";   
							
						
					}
					cout << endl;
		
				
			}
		
		
		
		
	}
