#include<iostream>
#include<cstring>
const int SIZE=20;
struct person{
	char firstName[SIZE];
	char lastName[SIZE];
};
int main()
{
	using namespace std;
	person per1;
	char result[SIZE]={'\0'};
	cout<<"Enter your first name: ";
	cin.getline(per1.firstName,SIZE);
	cout<<"Enter your last name: ";
	cin.getline(per1.lastName,SIZE);
	strcat(result,per1.lastName);
	strcat(result,",");
	strcat(result,per1.firstName);
	cout<<"Here's the information in a single string: "<<result<<endl;
	return 0;
}
