#include <string>

class Account{
	public:
		//constructor with two parameters, only assigns the accountName to name variable
		Account(std::string accountName, int initialBalance)
			: name{accountName} // member initializer
			{
				// validate that the initialBalance is greater than 0; if not,
				// data member balance keeps its initial value of 0
				if (initialBalance > 0) // if initialBalance is valid
					{
						balance = initialBalance; // assign it to data member balance
					}
			}
			
		// function that deposits (adds) only a valid amount to the balance
		void deposit(int depositAmount)
			{
				if (depositAmount > 0) // if depositAmount is valid
					{
						balance = balance + depositAmount; // add it to the balance 
					}
			}
			
		//function that returns the account balance 
		int getBalance() const 
			{
				return balance;
			}
			
		void setName(std::string accountName)
			{
				name = accountName;
			}
		
		// member function that retrieves the account name from the object
		std::string getName() const
			{
				return name;	
			}		
		void withdraw(int withdrawAmount)
			{
				if (withdrawAmount <= balance)
					{
						balance = balance - withdrawAmount; 
					}
				else
					{
						std::cout << "Withdrawal amount exceeded account balance."; 
					}
				
			}
			
				
	
	private:
		std::string name; // data member containing account holder's name
		int balance{0}; // date member with default initial value 
};

