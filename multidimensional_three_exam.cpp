#include <array>
#include "GradeBook2.h"

using namespace std;

int main()
{
	// two-dimensional array of students grades
	array<array<int, GradeBook::test>, GradeBook::students> grades{
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70},
		{87, 96, 70} }; 

	GradeBook myGradeBook("CS101 Introduction to c++ programming", grades); 
	myGradeBook.setCourseName("Bilgisayar Programlamaya Giris C++ - hasan ocak"); 
	myGradeBook.displayMessage(); 
	myGradeBook.processGrades(); 





}
