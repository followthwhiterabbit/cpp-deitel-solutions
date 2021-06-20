#include <iostream>
using namespace std;


class GradeBook
	{
		public:
			//function that displays a welcome message to the GradeBook user
			void displayMessage() 
				{
					cout << "Welcome to the GradeBook!" << endl;
				} // end function displayMessage
	};
	


int main(int argc, char** argv) {

GradeBook myGradeBook; // create a GradeBook object named myGradeBook
myGradeBook.displayMessage(); // call object's displayMessage function


	return 0;
} // end main
