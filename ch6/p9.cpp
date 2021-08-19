#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<vector>
struct patron
{
	std::string name;
	double money;
};

int main()
{
	using namespace std;
	vector<patron *> person;
	ifstream inFile;
	string filename="p9.txt";
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout<<"Open file "<<filename<<" error"<<endl;
		exit(EXIT_FAILURE);
	}
	while(inFile.good())
	{

		patron *temp=new patron;
		getline(inFile,temp->name);
		inFile>>temp->money;
		inFile.get();  //换行符删除
		person.push_back(temp);
	}
	if(inFile.eof())cout<<"...Read file completely"<<endl;
	else if(inFile.fail()){
		cout<<"tyep error"<<endl;
		exit(EXIT_FAILURE);
	}
	else if(inFile.bad()){
		cout<<"nuknown error"<<endl;
		exit(EXIT_FAILURE);
	}
	int in=0;
	cout<<"重要捐款人"<<endl;
	for(int j=0;j<person.size();j++)
	{
		if(person[j]->money>10000)
		{
			cout<<person[j]->name<<" "<<person[j]->money<<endl;
			in++;
		}
	}
	if(in==0)
		cout<<"none"<<endl;
	int un=0;
	cout<<"捐款人"<<endl;
	for(int j=0;j<person.size();j++)
	{
		if(person[j]->money<=10000)
		{
			cout<<person[j]->name<<" "<<person[j]->money<<endl;
			un++;
		}
	}
	if(un==0)
		cout<<"none"<<endl;
	for(patron * x:person) //c++11
		delete x;
	person.clear();
	return 0;
}
