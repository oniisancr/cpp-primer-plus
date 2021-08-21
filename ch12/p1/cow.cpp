#include"cow.h"
#include<cstring>
#include<iostream>

Cow::Cow()
{
	name[0]='\0';
	hobby=NULL;
	weight=0;
}
Cow::Cow(const char *nm, const char *ho, double wt)
{
	strcpy(name,nm);
	int len=strlen(ho);
	hobby=new char[len+1];	
	strcpy(hobby,ho);
	weight=wt;
}
Cow::Cow(const Cow &c)
{
	int len=strlen(c.hobby);
	hobby=new char[len+1];
	strcpy(hobby,c.hobby);
	strcpy(name,c.name);
	weight=c.weight;
}
Cow::~Cow()
{
	delete [] hobby;
}
Cow & Cow::operator=(const Cow & c)
{
	if(this == &c)return *this;
	delete [] hobby;
	int len=strlen(c.hobby);
	hobby=new char[len+1];
	strcpy(hobby,c.hobby);
	strcpy(name,c.name);
	weight=c.weight;
	return *this;
}
 void Cow::showCow()const
{
	std::cout<<"name: "<<name<<"\nhobby:"<<hobby<<"\nweight: "<<weight<<std::endl;
}

