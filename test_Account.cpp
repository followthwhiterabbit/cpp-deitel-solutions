#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	// create two Account objects
	Account account1{"John Green",50};
	Account account2{"John Blue", -7};
	
	// display initial balance of each object
	cout << "account1: " << account1.getName() << " balance is $"
		<< account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $" 
		<< account2.getBalance(); 
		
	cout << "\n\nEnter deposit for account1: "; // prompt the user 
	int depositAmount;
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account1 balance"; 
	account1.deposit(depositAmount); // add to account1's balance 
	
	// display balances 
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $" 
		<< account2.getBalance(); 
	
	
	cout << "\n\nEnter deposit amount for account2: "; 
	cin >> depositAmount;  // obtain user input
	cout << "adding " << depositAmount << " to account2 balance"; 
	account2.deposit(depositAmount); // add to account2 balance
	
	
	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $" 
		<< account2.getBalance() << endl; 
	
		
	cout << "\n\nEnter withdrawal amount for account1: ";
	int withdrawAmount;
	cin >> withdrawAmount;
	cout << "subtracting " << withdrawAmount << " from account1 balance\n"; 
	account1.withdraw(withdrawAmount); 
	cout<< endl;
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance(); 
			


		
		
	
	
	
}
