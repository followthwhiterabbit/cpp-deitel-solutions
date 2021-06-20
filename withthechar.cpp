#include <iostream>
#include <stdio.h>


using namespace std; 


void drawrect(int, int, char); 

int main()
	{
		int width, height; 
		char ch; 
		
		cout << "enter width and height: "; 
		cin >> width >> height; 
		cout << "enter the character: "; 
		
		cin >> ch;  
		
		
		drawrect(width, height, ch); 
		
		
	}
	
	
	void drawrect(int width, int height, char c)
		{
					for(int i = 1; i <= height; i++)
						{
							for(int j = 1; j <= width; j++)
								{
									cout << c; 
									
									
								}
							
							cout << endl; 
							
							
							
							
						}
							
						
			
			
		}
