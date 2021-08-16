#include<iostream>
float celsius2fahrenheit(float );
int main()
{
	using namespace std;
	cout<<"Please enter a Celsius value: ";
	float degree;
	cin>>degree;
	cout<<degree<<" degrees Celsius is "<<celsius2fahrenheit(degree)<<" degrees Fahrenheit."<<endl;
	return 0;
}
float celsius2fahrenheit(float degree)
{
	return degree*1.8+32.0; 

}
