#include <iostream>
#include <array>
#include <vector>
#include <iomanip>


using namespace std;



void swap_callbyvalue(int a, int b); // call by value 
void swap_callbypointer(int* a, int* b); // call by pointer 
void swap_callbyreference(int& a, int& b);  // call by reference



int main()
{

	/*
	
	

	cout << "enter the size of the array: "; 
 
	size_t size;                         // we can either use standard containers or use dynamic arrays

	cin >> size; 

	vector<double> arr{}; 

	arr.resize(size); 


	// now populate 

	for (int i = 0; i < arr.size(); i++)
		cin >> arr[i]; 


	cout << endl; 

	for (int i{ 0 }; i < arr.size(); i++)
		cout << arr[i] << " "; 


	cout << endl; 


	int* Array; 
	cout << "enter the size: "; 

	int Size = 0; 
	cin >> Size; 

	Array = new int[Size]; // allocate memory for our array 


	for (int i = 0; i < Size; i++)
		cin >> Array[i];



	for (int i = 0; i < Size; i++)
		cout << Array[i] << " "; 


		*/

	int x, y; 

	cin >> x >> y; 


	cout << "addresses of x and y is : " << &x << " " << &y << endl; 
	cout << "the  values of x and y is: " << x << " " << y << endl; 

	swap_callbyvalue(x, y); 


	cout << "the values of x and y after call by value is: " << x << " " << y << endl; 

	cout << endl; 
	cout << endl; 


	int k, l; 

	cin >> k >> l; 



	swap_callbypointer(&k, &l); // we send the addresses of the variables to the pointer variables



	cout << "the values of k and l after call by pointer is: " << k << " " << l << endl;


	int m, n; 
	cin >> m >> n; 



	swap_callbyreference(m, n); // we send the values to the address of other variables

	cout << "the values of m and n after call by reference is:  " << m << " " << n; 




}


void swap_callbyvalue(int a, int b)
{
	int t; 

	t =  a; 
	a = b; 
	b = t; 


}

void swap_callbypointer(int* a, int* b)
{
	int temp; 

	temp = *a; 
	*a = *b; 
	*b = temp; 

}

void swap_callbyreference(int& a, int& b)
{
	int temp; 

	temp = a; 
	a = b; 
	b = temp; 

}