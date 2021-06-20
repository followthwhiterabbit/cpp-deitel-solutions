#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

double hours_worked, accrued_leave;

cout << "Enter number of hours worked (-1 to end): "; 
cin >> hours_worked;


while(hours_worked != -1)
	{
		accrued_leave = 2 + hours_worked/10;
		cout << setprecision(2) << fixed;  
		cout << "Accrued leave: " << accrued_leave << " hours" << endl;
		cout << endl; 
		cout << "Enter number of hours worked (-1 to end): ";
		cin >> hours_worked; 
		
		
	}











	return 0;
}
