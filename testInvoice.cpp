#include <iostream>

#include "Invoice.h"

using namespace std;


int main()
	{
	
	int productSelect;
	int optionSelect;
	
	Invoice egg1{"", "", 0, 10, 0.0, 0.0};
	Invoice milk1{"", "", 0, 0, 0.0, 0.0};
	
	cout << "the price of an egg is: " << egg1.getPricePerItem(); 
	
	cout << "Please choose the product  below: \n";
	cout << "1 - egg" << endl;
	cout << "2 - milk(1Lt)" << endl;
	cin >> productSelect;
	
	menu:
		cout << endl;
		cout << "Choose the option Below: \n"; 
		cout << "1-setting the part number\n";
		cout << "2-setting the part description\n";
		cout << "3-setting the number of items purchased\n";
		cout << "4-setting the price\n"; 
		cout << "5-getting the part number\n"; 
		cin >> optionSelect;
	
	if (productSelect == 1)
		{
			string product = "milk"; 
			if (optionSelect == 1)
				{
					string partnumber;	
					cin >> partnumber;
					egg1.setPartNumber(partnumber);		
				
				}
			if (optionSelect == 2)
				{
					string partdescription;
					cin >> partdescription;  
					egg1.setPartDescription(partdescription);		
				
				}
			if (optionSelect == 3)
				{
					
					cout << "enter the number of items: ";
					int numberofitems;
					cin >> numberofitems;
					egg1.setNumberOfItemsPurchased(numberofitems);		
				
				}
				
			if (optionSelect == 4)
				{
					
					cout << "enter the price: ";
					int priceofanitem;
					cin >> priceofanitem;
					egg1.setPricePerItem(priceofanitem);		
				}
			if (optionSelect == 5)
				{
					cout << "partnumber of an " << product << " is: " << egg1.getPartNumber();		
				}
				
			goto menu;
				
				
		}
				
				
			
			
		if (productSelect == 2)
		{
			if (optionSelect == 1)
				{
					string partnumber;	
					cin >> partnumber;
					
					milk1.setPartNumber(partnumber);		
				
				}
			if (optionSelect == 2)
				{
					string partdescription;
					cin >> partdescription; 
					
					milk1.setPartDescription(partdescription);		
				
				}
			if (optionSelect == 3)
				{
					
					cout << "enter the number of items: ";
					int numberofitems;
					cin >> numberofitems;
					milk1.setNumberOfItemsPurchased(numberofitems);		
				
				}
				
			if (optionSelect == 4)
				{
					
					cout << "enter the price: ";
					int priceofanitem;
					cin >> priceofanitem;
					milk1.setPricePerItem(priceofanitem);		
				
				}
				
				
		
			
		}
	
		
		
		
	
	
	  
	
	
	
	
	
	
	
	
	}
