#include <iostream>
using namespace std;

float calculateCharges(float hours); // function prototype for fees


int main()
	{
		
		float hrs_parked1, hrs_parked2, hrs_parked3; 
		
		cin >> hrs_parked1 >> hrs_parked2 >> hrs_parked3; 
		
		
		cout << "Car\tHours\tCharge" << endl; 
		cout << "1\t" << hrs_parked1 << "\t" << calculateCharges(hrs_parked1) << endl;
		cout << "2\t" << hrs_parked2 << "\t"  <<  calculateCharges(hrs_parked2) << endl; 
		cout << "3\t" << hrs_parked3 << "\t" << calculateCharges(hrs_parked3) << endl;

	}
	
	
	float calculateCharges(float hours)
		{
			float charges; 
			
			
			if (hours <= 3)
				{
					charges = 20.0; 
					
				}
			else
				{
					charges = 20.0 + (hours - 3.0) * 5.0; 
					
				
					
				}
			
			
			if (hours == 24)
				{
					charges = 50.0; 
				}
			
			if (hours >= 24)
				{
					
					charges = 50.0 + (hours - 24.0) * 5.0; 
					
				 
					
				}
			
			
			return charges; 
			
			
			
		}
