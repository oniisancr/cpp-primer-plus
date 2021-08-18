#include<iostream>
#include<string>
#include<cctype>
struct patron
{
	std::string name;
	double money;
};

int main()
{
	using namespace std;
	int num=0;
	cout<<"捐献人数：";
	cin>>num;
	if(!isdigit(num))return 0;	//防止格式错误
	cin.ignore(1024,'\n');
	patron *person=new patron[num];
	for(int i=0;i<num;i++)
	{
		cout<<"第"<<i+1<<"位"<<endl;
		cout<<"名字：";
		getline(cin,person[i].name);
		cout<<"金额：";
		cin>>person[i].money;
		cin.ignore(1024,'\n');
	}
	int in=0;
	cout<<"重要捐款人"<<endl;
	for(int j=0;j<num;j++)
	{
		if(person[j].money>10000)
		{
			cout<<person[j].name<<" "<<person[j].money<<endl;
			in++;
		}
	}
	if(in==0)
		cout<<"none"<<endl;
	int un=0;
	cout<<"捐款人"<<endl;
	for(int j=0;j<num;j++)
	{
		if(person[j].money<=10000)
		{
			cout<<person[j].name<<" "<<person[j].money<<endl;
			un++;
		}
	}
	if(un==0)
		cout<<"none"<<endl;
	delete [] person;
	return 0;
}
