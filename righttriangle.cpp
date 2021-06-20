#include <iostream>

using namespace std;

int main()
	{
		int a, b, c;
		
		cin >> a;
		cin >> b;
		cin >> c;
		
		if(a*a + b*b == c*c)
			cout << "right triangle";
		
		if(b*b + c*c == a*a)
			cout << "right triangle";
		
		if(c*c + a*a ==  b*b)
			cout << "right triangle";
		
		
		
		
		
	}
