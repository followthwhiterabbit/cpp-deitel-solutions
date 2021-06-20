// quality points for numeric grades

#include <iostream>

using namespace std;

int qualityPoints(int); // function prototype

int main()
	{
		int avg; 
		cout << "enter the average of the student: ";	
		cin >> avg; 
		cout << "the point is: " << qualityPoints(avg); 
		
	}
	
	int qualityPoints(int average)
		{
			if (average >= 90 && average <= 100)
				return 4;
			if (average >= 80 && average < 90)
				return 3; 
			if (average >= 70 && average < 80)
				return 2; 
			if (average >= 60 && average < 70)
				return 1; 	
			if (average < 60)
				return 0; 
			
		}
