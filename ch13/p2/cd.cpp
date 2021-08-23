#include"cd.h"
#include<cstring>
#include<iostream>
Cd::Cd(char *s1, char * s2, int n, double x)
{
	performers=new char[strlen(s1)+1];
	strcpy(performers,s1);
	label=new char[strlen(s2)+1];
	strcpy(label,s2);
	selections=n;
	playtime=x;
}
Cd::Cd(const Cd & d)
{
	performers=new char[strlen(d.performers)];
	strcpy(performers,d.performers);
	label=new char[strlen(d.label)];
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
}
Cd::Cd()
{
	performers=new char[2];
	label=new char[2];
}
Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}
void Cd::report()const
{
	using namespace std;
	cout<<"performers: "<<performers;
	cout<<" lable: "<<label;
	cout<<" selections: "<<selections;
	cout<<" playtime: "<<playtime<<endl;
}
Cd & Cd::operator=(const Cd &d)
{
	if(this==&d)return *this;
	delete [] performers;
	delete [] label;
	performers=new char[strlen(d.performers)+1];
	strcpy(performers,d.performers);
	label=new char[strlen(d.label)+1];
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
	return *this;
}
Classic::Classic(char *s1, char * s2,char * b, int n, double x):Cd(s1,s2,n,x)
{
	brand=new char[strlen(b)+1];
	strcpy(brand,b);
}
Classic::Classic(const Classic & c):Cd(c)
{
	brand=new char[strlen(c.brand)+1];
	strcpy(brand,c.brand);
}
Classic::Classic():Cd()
{
	brand=new char[2];
}
Classic::~Classic()
{
	delete [] brand;
}
void Classic::report()const
{
	Cd::report();
	std::cout<<"brand: "<<brand<<std::endl;
}
Classic & Classic::operator=(const Classic & c)
{
	if(this==&c)return *this;
	Cd::operator=(c);
	delete [] brand;
	brand=new char[strlen(c.brand)+1];
	strcpy(brand,c.brand);
	return *this;
}

