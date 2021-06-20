#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger(double number)
	{
		double roundedNum;
		roundedNum = floor(number + .5); 
		return roundedNum; 
		
	}

double roundToTenths(double number)
	{
		double roundedNum; 
		roundedNum = floor(number * 10.0 + .5) / 10.0; 
		return roundedNum;
	}

double roundToHundreths(double number)
	{
		double roundedNum;
		roundedNum = floor(number * 100.0 + .5) / 100.0; 
		return roundedNum; 
	}

double roundToThousandths(double number)
	{
		double roundedNum; 
		roundedNum = floor(number * 1000.0 + .5) / 1000.0; 
		return roundedNum; 
	}




int main()
	{
		double userInput = 0.0, originalVal = 0.0; 
		int selection = 0; 
		
		cout << "Enter a double value: ";
		cin >> userInput; 
		originalVal = userInput; 
		cout << "(1) Round to nearest integer.\n(2) Round to nearest tenth.\n"; 
		cout << "(3) Round to nearest hundreth.\n(4) Round to nearest thousandth.\nMake a selection: "; 
		cin >> selection; 	
		switch(selection)
			{
				case 1:
					userInput = roundToInteger(userInput); 
					break;
				case 2:
					userInput = roundToTenths(userInput); 
					break;
				case 3:
					userInput = roundToHundreths(userInput); 
					break;
				case 4:
					userInput = roundToThousandths(userInput); 
					break;
				default:
					cout << "Invalid selection."; 
					break;
				
				
			}
		cout << "The number " << originalVal << " was rounded to " << userInput; 
	
		
	}
