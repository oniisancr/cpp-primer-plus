#include<iostream>
const float scale=60;

int main()
{
	using namespace std;
	float degree,minute,second,result;
	cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
	cout<<"First, enter the degrees: ";
	cin>>degree;
	cout<<"Next, enter the minutes of arc: ";
	cin>>minute;
	cout<<"Finally, enter the seconds of arc: ";
	cin>>second;
	result=degree+minute/scale+second/(scale*scale);
	cout<<degree<<" degrees, "<<minute<<" minutes, "<<second<<" seconds = "<<result<<" degrees"<<endl;	
	return 0;
}
