// pass by value

#include <iostream>

using namespace std;

void swap(int, int); 


int main()
	{
		int a, b; 
		cout << "enter two int: "; 
		cin >> a >> b; 
		
		swap(a, b); 
		cout << a << " " <<  b; 
		
	}
	
void swap(int x, int y)
	{
		int temp;
		temp = x;
		x = y; 
		y = temp; 
		return; 
		
	}
	
	

