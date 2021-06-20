// writing statements that print a number at random from each of the following sets
// 0, 3, 6, 9, 12
// 3, 5, 7, 9, 11, 13
// 6, 10, 14, 18

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; 


int main()
	{
		srand(time(NULL)); 
		
		cout << "printing a number from 0, 3, 6, 9, 12 :  "; 
		cout << (rand() % 5) * 3 << endl; 
		
		cout << "printing a number from 3, 5, 7, 9, 11, 13 :  "; 
		cout << 3 + (rand() % 6) * 2 << endl; 
		
		cout << "printing a number from 6, 10, 14, 18 :  "; 
		cout << (rand() % 5) * 3 << endl; 
		
		
		
		
		
	}
