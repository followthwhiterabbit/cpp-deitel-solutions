#include <iostream>

using namespace std;

int main()
	{
		double sum = 1;
		double total = 1; 
		int n,i,power;
		cin >> n;
		cin >> power;
		
		for(i=1; i<=n; i++)
			{
				
				sum =  sum * power *  1/i; 
				
				total = total + sum;
			}
		
		cout << total;
		
		
		
	}
