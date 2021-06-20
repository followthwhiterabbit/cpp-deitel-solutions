#include <iostream>
using namespace std;


int main()
	{
		int count = 1; 
		int &cRef = count ; 
		
		for(int i = 1; i < 10; i++)
			{
				++cRef; 
				cout << cRef << endl; 		
			}
	
	
		
		
	}
