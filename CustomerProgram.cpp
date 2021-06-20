#include <iostream>
using namespace std;



int main()
	{
int accountnumber; 
double beginningbalance, totalcharges, totalcredits, creditlimit; 
double newbalance;

cout << "Enter account number (or -1 to quit): ";
cin >> accountnumber;


while(accountnumber != -1)
	{
		cout << "Enter beginning balance: ";
		cin >> beginningbalance;
		cout << "Enter total charges: ";
		cin >> totalcharges;
		cout << "Enter total credits: "; 
		cin >> totalcredits;
		cout << "Enter credit limit: "; 
		cin >> creditlimit;
		newbalance = beginningbalance + totalcharges - totalcredits;
		
		if (newbalance >= creditlimit)
			{	cout << "New balance is " << newbalance << endl;	
				cout << "Account:\t" << accountnumber << endl;	
				cout << "Credit limit: " << creditlimit << endl;
				cout << "Balance:\t" << newbalance << endl; 
				cout << "Credit limit Exceeded." << endl;
				
			}
		else
			{	
				cout << "New balance is " << newbalance << endl;	
			}
			
		cout << "Enter Account Number (or -1 to quit): "; 
		cin >> accountnumber;  
		
	}


return 0; 

	}
