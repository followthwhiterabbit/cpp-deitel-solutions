// determining for a pair of integers whether the second is a factor of the first
#include <iostream>
using namespace std;

int isFactor(int, int); // function prototype



int main()
	{
		int n1, n2; 
		 
		
		cout << "enter two numbers: "; 
		cin >> n1 >> n2; 
		
		cout << isFactor(n1, n2) << endl; 	
	

		
	}
	
	
	int isFactor(int n1, int n2)
		{
			
			if (n2 % n1 == 0)
				{
					return 1; 
				}
			else
				return 0; 
				
			
		}
