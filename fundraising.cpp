#include <iostream>

using namespace std;

int main ()
{
		
	int laps; 
	double sponsorship_rate; 
	double studentcontribution = 0.0; 
	double sum = 0.0; 
	
	
	
	cout << "Enter laps completed(-1 to end): "; 
	cin >> laps; 
	
	
	while( laps != -1)
		{
			cout << "Enter sponsorship rate: "; 
			cin >> sponsorship_rate;
			if (laps <= 40)
				{
					studentcontribution = laps * sponsorship_rate;
						
				}
			else 
				{
					studentcontribution = 40 * sponsorship_rate + (laps-40)*(1.50)*sponsorship_rate; 
							
				}		
			
			sum = sum + studentcontribution; 
		
		
		cout << "Student contribution is: " << studentcontribution;
		cout << endl;
		cout << "Enter laps completed(-1 to end): "; 
		cin >> laps; 
			
			
		}
		
		cout << "Total funds raised: " << sum; 
		
}
