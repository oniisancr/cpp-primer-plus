#include"complex0.h"
#include<iostream>
using namespace std;
int main()
{
	complex0 a(3.0,4.0);
	complex0 c;
	cout<<"Enter a complex number (q to quit): \n";
	while(cin>>c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjugate is "<< ~c << endl;
		cout << "a is " << a << endl;
		cout << "a +c " << a + c << endl;
		cout << "a - c " << a - c << endl;
		cout << "a * c " << a * c << endl;
		cout << "2 * c " << 2 * c << endl;
		cout << "Enter a complex number (q to quit): \n";
	}
	cout << "Done!" << endl;
	return 0;
}

