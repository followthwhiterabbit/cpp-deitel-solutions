#include <iostream>


using namespace std;

int main()
	{
	
	int option, pieces, number_of_products;
	double total, sum;
	int i; 



	cout << "enter the number of products: "; 
	cin >> number_of_products;
	
	cout << "enter the product number: "; 
	cin  >> option; 
	
	cout << "enter quantities sold: "; 
	cin >> pieces;
	
	sum  = 0; 


	i = 1;

	
		do
		{

	
	switch(option)
		{
			case 1:
				total = pieces * 2.98;
				break;
			case 2:
				total = pieces * 4.50;
				break;
			case 3:
				total = pieces * 9.98; 
				break;
			case 4:
				total = pieces * 4.49;
				break;
			case 5:
				total = pieces * 6.87;
				break;
			default:
				cout << "you entered an invalid product."; 			
			
			
		}
			sum = sum + total;
			
				if (number_of_products != 1)
					{
						
				cout << "enter the product number: "; 
				cin  >> option; 
	
				cout << "enter quantities sold: "; 
				cin >> pieces;
				
						
					}
			
				i++; 
			
		
		}while(i < number_of_products); 
	
	
	
	cout << "the sum of all quantities are: " << sum; 
	
	
	
		
		
		
	}
