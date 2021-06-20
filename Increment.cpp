// prefix increment and postfix increment
#include <iostream>
using namespace std;


int main()
	{
//		// demonstrate postfix increment operetor
//		unsigned int c = 5; // initializes c with the value 5
//		cout << "c before postincrement: " << c << endl; // prints 5
//		cout << " postincrementing c: " << c++ << endl; // prints 5
//		cout << " post incremented: " << c << endl; // prints 6
//		
//		cout << endl;
//		
//		// demonstrate prefix increment operetor 
//		c = 5; // assigns 5 to c
//		cout << " c before preincrement: " << c << endl; // prints 5
//		cout << " preincrementing c: " << ++c << endl; // prints 6
//		cout << " c after princrement: " << c << endl; // prints 6
//		
//		
		
double driven_km, used_lt, total_km, total_lt;
total_km = 0;
total_lt = 0; 


		cout << "Enter kilometers driven(-1 to quit): ";
		cin >> driven_km;
		
while (driven_km != -1)
	{
		
		cout << "Enter liters used: ";
		cin >> used_lt;
		
		cout << "Kms per liter this trip: " << driven_km / used_lt; 
		total_km  += driven_km;
		total_lt += used_lt;
		cout << endl;
		cout << "Total kms per liter: " << total_km / total_lt;
		cout << endl;
	
		
		cout << "Enter kilometers driven(-1 to quit): ";
		cin >> driven_km;
	} 














		
	}
