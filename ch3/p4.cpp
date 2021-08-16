#include<iostream>
const int hourInDay=24;
const int minuteInHour=60;
const int secondInMin=60;

int main()
{
	using namespace std;
	long num,temp;
	int day,hour,minute,second;
	cout<<"Enther the number of seconds: ";
	cin>>num;
	day=num/(hourInDay*minuteInHour*secondInMin);
	temp=num%(hourInDay*minuteInHour*secondInMin);
	hour=temp/(minuteInHour*secondInMin);
	temp=temp%(minuteInHour*secondInMin);
	minute=temp/secondInMin;
	second=temp%secondInMin;
	cout<<num<<" seconds = "<<day<<" day, "<<hour<<" hours, "<<minute<<" minutes, "<<second<<" seconds"<<endl;

	return 0;
}
