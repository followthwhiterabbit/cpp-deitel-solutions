// pass-by-value vs pass-by-reference
#include <iostream>

using namespace std;

int tripleByValue(int); 
int tripleByReference(int &);  // function prototypes 

int main()
	{
		int counter; 
		int a, b; 
		cout << "enter the value you want to triple: "; 
		cin >> counter; 
		
		cout << tripleByValue(counter); 
		cout << endl; 
		cout << tripleByReference(counter); 
		cout << endl; 
		
		cout << "enter two numbers to swap: "; 
		
		cin >> a >> b; 
		
		swap(a, b); 
		
		cout << a << " " << b; 
		
		
	}
	

int tripleByValue(int c)
	{
		return  3 * c; 
		
	}
	
int tripleByReference(int &c)
	{
		return 3 * c; 
		
	}
	
void swap(int x, int y)
	{
		int temp; 
		temp = x; 
		x = y; 
		y = temp; 
	
		
	}

