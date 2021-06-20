#include <iostream>
#include <cmath>


using namespace std;

int main()
	{
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c; 
		
		if (a >= abs(b-c)  && a <= b+c)
			if (b >= abs(a-c)  && a <= a+c)
				if(c >= abs(a-b)  && a <= b+a)
					cout << "it's possible"; 
		
		
		
	}
