#include<iostream>
#define AstronomicalUnit 63240
double ligthYear2AstronomicalUnit(double );
int main()
{
	using namespace std;
	cout<<"Enter the number of ligth year: ";
	double year;
	cin>>year;
	cout<<year<<" light year = "<<ligthYear2AstronomicalUnit(year)<<" actronomical units."<<endl;
	return 0;
}
double ligthYear2AstronomicalUnit(double year)
{
	return year*AstronomicalUnit;
}
