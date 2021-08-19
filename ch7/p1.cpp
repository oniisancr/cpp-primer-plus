#include<iostream>
double harmonicMean(double ,double);
int main()
{
	using namespace std;
	double m=0,n=0;
	while(true)
	{
		cout<<"Enter two numbers(0 to quit): ";
		cin>>m>>n;
		if(m==0||n==0)
			break;
		cout<<"Harmonic Mean: "<<harmonicMean(m,n)<<endl;
	}
	return 0;
}
double harmonicMean(double m, double n)
{
	return 2.0*m*n/(m+n);
}
