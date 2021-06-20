#include <iostream>
using namespace std; 


void solidRect(int, int); // function prototype 


int main()
	{
		int width, height; 
		
		cout << "enter width and height: ";
		
		cin >> width >> height; 
		
		solidRect(width, height); 
		
		
	}
	
	
	
	void solidRect(int width, int height)
		{
			for(int i = 1; i <= height; ++i)
				{
					for (int j = 1; j <= width; j++)
						{
							cout << "*"; 
						}
					cout << endl; 
					
				}
			
		}
