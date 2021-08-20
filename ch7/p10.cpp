#include<iostream>

double calculate(double, double, double (*p)(double, double));
double add(double, double);
double sub(double, double);

int main()
{
	using namespace std;
	double numA, numB;
	double result;
	cout<<"Enter two number: ";
	while(cin>>numA>>numB)
	{
		cout<<"Sum: "<<calculate(numA,numB,add)<<endl;
		cout<<"Sub: "<<calculate(numA,numB,sub)<<endl;
		cin.ignore(1024,'\n');
		cout<<"Enter two number: ";
	}	
	cout<<"Bye "<<endl;
	return 0;
}
double add(double m, double n)
{
	return m+n;
}
double sub(double m, double n)
{
	return m-n;
}
double calculate(double m, double n, double (*p)(double, double))
{
	return (*p)(m,n);

}
