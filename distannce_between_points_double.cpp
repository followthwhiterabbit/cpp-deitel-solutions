// distance between points
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>


using namespace std;

double distance(double, double, double, double); // function prototype  



int main()
	{
		double x1, y1, x2, y2; 
		cout << "enter the two points in the plane(x1, y1), (x2, y2): "; 
		
		cin >> x1 >> y1 >> x2 >> y2; 
		
		cout << "the distance between the points is: " << distance(x1, y1, x2, y2); 
		
		
		
		
	}
	
double distance(double x1 , double y1, double x2, double y2)
	{
		double dis; 
		
		dis = sqrt((x1- x2)*(x1- x2) + (y1 - y2) * (y1 - y2)); 
		
		return dis; 
		
		
	}
