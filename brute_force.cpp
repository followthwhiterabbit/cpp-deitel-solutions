#include <iostream>

using namespace std;

int main()
	{
		int i, j, k;
		

		
		for(int i = 1; i <= 500; i++)
			{
				for(int j = 1; j <= 500; j++)
					{
						for(int k = 1; k<= 500; k++)
							{
								if ( i * i + j * j == k * k)
									{
										cout << i << " " << j << " " << k << endl;
									}
								
								
							}
						
						
						
					}
				
				
			}
		
		
		
		
	}
