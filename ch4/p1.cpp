#include<iostream>
#include<string>
struct student{
	std::string firstName;
	std::string lastName;
	char grade;
	int age;	
};
int main()
{
	using namespace std;
	student stu;
	cout<<"What is your first name? ";
	getline(cin,stu.firstName);
	cout<<"What is your last name? ";
	getline(cin,stu.lastName);
	cout<<"What latter grade  do you deserve? ";
	cin>>stu.grade;
	cout<<"What is your age? ";
	cin>>stu.age;

	cout<<"Name: "<<stu.lastName<<", "<<stu.firstName<<endl;
	cout<<"Grade: "<<(char)(stu.grade+1)<<endl;
	cout<<"Age: "<<stu.age<<endl;

	return 0;
}	
