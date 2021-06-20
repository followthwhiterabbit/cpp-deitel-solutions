#include <iostream>


using namespace std;

int main()
	{
//		
//		int a = 4, b = 3, c = 2, d = 1; 
//		
//		
//		cout << (a == 1) << endl;
//		cout << (b == 3) << endl;
//		cout << (d >= 1 && c < 4) << endl;
//		cout << (d <= 4 && b < d) << endl;
//		cout << (b >= d || c == a) << endl;
//		cout << (c + d < b || b >= a) << endl;
//		cout << (!d) << endl;
//		cout << (!(a - b)) << endl;
//		cout << (!(c < d )) << endl;
//		
//		

int i = 1, j=1;

double pi_plus_terms = 0, pi_minus_terms, sum_plus = 0, sum_minus = 0, sum = 0;

int number_of_terms; 

cout << "enter the number of terms: ";
cin >> number_of_terms;


for(i=1; i <= 2*number_of_terms - 1 ; i += 4)
	{	
		pi_plus_terms = 4/static_cast<double>(i); 
		
		sum_plus = sum_plus + pi_plus_terms;
	
	}

for(j=3; j <= 2*number_of_terms - 1; j += 4)
	{	
		pi_minus_terms = -1*4/static_cast<double>(j);
		
		sum_minus = sum_minus + pi_minus_terms;
	
	}

sum = sum_plus + sum_minus;

cout << "for " << number_of_terms << " the result is: " << sum; 




		
	}
