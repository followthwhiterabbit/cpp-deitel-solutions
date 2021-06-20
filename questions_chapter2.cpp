/*
Examples in Deitel's book
*/

#include <iostream>

using namespace std;

// const double pi = 3.1459; 


int main(int argc, char** argv) {
	












/*
double weight, height, body_mass_index;

cout << "Enter weight and height : "; 
cin >> weight >> height; 

body_mass_index = (weight)/ (height * height); 


cout << "YOUR BODY MASS INDEX IS : " << body_mass_index << endl;

cout << endl;

cout << "BMI VALUES" << endl;

cout << "Underweight: less than 18.5" << endl;
cout << "Normal:      between 18.5 and 24.9" << endl;
cout << "Overweight:  between 25 and 29.9" << endl;
cout << "Obese:       30 or greater" << endl;

*/


/*

cout << "integer" << " square" << "  cube" << endl;

for (int i = 0; i <= 10; i++)
	{
		cout << i << "\t" << i * i << "\t" << i * i * i << endl; 
	}

*/








/*

int a, b, c, d, e, f; 

cout << "Enter the integer : "; 
cin >> a; 

f = a % 10; 
a = a / 10; 
e = a % 10; 
a  = a / 10; 
d = a % 10; 
a = a / 10; 
c = a % 10; 
a = a / 10; 
b = a % 10; 

cout << b << "   " << c << "   " << d << "   " << e << "   " << f << endl;

*/

/*

char ch; 
cout << "Enter a character to show its integer equivalent : "; 
cin >> ch; 
cout << ch << endl;
cout << static_cast < int > (ch); 

*/ 



/*
cout << "A" << endl;
cout << static_cast < int >('A'); // print 'A' as an integer
*/

/*
cout << "* * * * * * * *\n * * * * * * * *" << endl;

cout << "* * * * * * * *\n * * * * * * * *" << endl;

cout << "* * * * * * * *\n * * * * * * * *" << endl;

cout << "* * * * * * * *\n * * * * * * * *" << endl;
*/









/*

int a, b; 

cout << "Enter two integers : "; 
cin >> a >> b;

if (a % b == 0)
	  cout << "The first is the multiple of the second";
else
	cout << "It's not the multiple of second"; 
	
*/



/*

int a;  

cout << "Enter an integer : "; 

cin >> a;

if (a == 0)
	cout << "Zero" << endl;



if (a % 2 == 0)
	cout << "Even";
else
	cout << "Odd"; 


*/	














/*
int a, b, c, d, e; 
int largest, smallest; 

cout << "Enter five integers : "; 
cin >> a >> b >> c >> d >> e; 

if (a > b && a > c && a > d && a > e)
	largest = a; 
if (b > a && b > c && b > d && b > e)
	largest = b; 
if (c > a && c > b && c > d && c > e)
	largest = c; 
if (d > a && d > b && d > c && d > e)
	largest = d; 
if (e > a && e > b && e > c && e > d)
	largest = e; 


if (a < b && a < c && a < d && a < e)
	smallest = a; 
if (b < a && b < c && b < d && b < e)
	smallest = b; 
if (c < a && c < b && c < d && c < e)
	smallest = c; 
if (d < a && d < b && d < c && d < e)
	smallest = d; 
if (e < a && e < b && e < c && e < d)
	smallest = e; 

cout << "The largest is : " << largest << endl; 
cout << "The smallest is : " << smallest << endl; 


*/







/*

cout << "*********" << "\t\t***" << "\t\t*" << "\t\t*" << endl;
cout << "*       *" << "\t      *     *" << "\t       ***" << "\t       * *" << endl;
cout << "*       *" << "\t     *       *" << "\t      *****" << "\t      *   *" << endl;
cout << "*       *" << "\t     *       *" << "\t\t*" << "\t     *     *" << endl;
cout << "*       *" << "\t     *       *" << "\t\t*" << "\t    *       *" << endl;
cout << "*       *" << "\t     *       *" << "\t\t*" << "\t     *     *" << endl;
cout << "*       *" << "\t     *       *" << "\t        *" << "\t      *   *" << endl;
cout << "*       *" << "\t     *       *" << "\t        *" << "\t       * *" << endl;
cout << "*********" << "\t\t***" << "\t\t*" << "\t\t*" << endl;

*/



/*

double radius, diameter, circumference, area; 

cout << "Enter the radius of the circle : ";
cin >> radius; 

diameter = 2 * radius; 
circumference = 2 * pi * radius; 
area = pi * radius * radius; 

cout << "The diameter of the circle is : " << diameter << endl;
cout << "The circumference of the circle is : " << circumference << endl;
cout << "The area of the circle is : " << area << endl;

*/ 


	return 0;
}
