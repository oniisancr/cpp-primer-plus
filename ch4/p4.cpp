#include<iostream>
#include<string>
struct person{
	std::string firstName;
	std::string  lastName;
};
int main()
{
	using namespace std;
	person per1;
	string result;
	cout<<"Enter your first name: ";
	getline(cin,per1.firstName);
	cout<<"Enter your last name: ";
	getline(cin,per1.lastName);
	result=per1.lastName+","+per1.firstName;
	cout<<"Here's the information in a single string: "<<result<<endl;
	return 0;
}
