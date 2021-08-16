#include<iostream>

using namespace std;

void showTime(int,int);

int main()
{
	int hour,min;
	cout<<"Enter the number of hours: ";
       	cin>>hour;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	showTime(hour,min);
	return 0;
}
void showTime(int hour, int min)
{
	cout<<"Time: "<<hour<<":"<<min<<endl;
}
