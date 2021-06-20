// isMultiple3 
#include <iostream>

using namespace std; 

int isMultiple3(int); 

int main()
	{
		int num; 
		
		cout << "enter the number: "; 
		
		cin >> num; 
		
		while (num != '\n')
			{
			 cout << isMultiple3(num) << endl; ; 
				
			cin >> num; 
			
		
		
	}
	
int isMultiple3(int num)
	{
		if ( num % 3 == 0)
			return 1; 
		else
			return 0; 
				
	}
	
	
	
	
	
