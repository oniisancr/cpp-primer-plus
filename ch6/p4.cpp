#include<iostream>
using namespace std;

const int strsize=15;
const int structsize=4;

struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

void displaybyname(bop * mybop);
void displaybytitle(bop * mybop);
void displaybybopname(bop * mybop);
void displaybypre(bop * mybop);

int main()
{
	char ch;
	bop mybop[structsize]={
		{"rui1","st","ss1",2},
		{"rui2","st1","ss2",1},
		{"rui3","st2","ss3",0},
		{"rui4","st3","ss4",1}
	};
	cout<<"BOP Report:\n"<<"a. display by name\tb. display by title\n";
	cout<<"c. display by bopname\td. display by preference\nq. quit"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	while(true)
	{
		if(!(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='q'))
		{
			cin.ignore(1024,'\n');
			cout<<"Please enter the right choice: ";
			cin>>ch;
			continue;
		}
		switch(ch)
		{
			case 'a':
				displaybyname(mybop);
				break;
			case 'b':
				displaybytitle(mybop);
				break;
			case 'c':
				displaybybopname(mybop);
				break;
			case 'd':
				displaybypre(mybop);
				break;
			case 'q':
				return 0;
		}
		cout<<"Enter your choice: ";
		cin>>ch;
	}

}
void displaybyname(bop * mybop)
{
	for(int i=0;i<structsize;i++)
	{
		cout<<mybop[i].fullname<<endl;
	}
}
void displaybytitle(bop * mybop)
{
	for(int i=0;i<structsize;i++)
	{
		cout<<mybop[i].title<<endl;
	}
}
void displaybybopname(bop * mybop)
{
	for(int i=0;i<structsize;i++)
	{
		cout<<mybop[i].bopname<<endl;
	}
}
void displaybypre(bop * mybop)
{
	for(int i=0;i<structsize;i++)
	{
		if(mybop[i].preference==0)
			cout<<mybop[i].fullname<<endl;
		else if(mybop[i].preference==1)
			cout<<mybop[i].title<<endl;
		else if(mybop[i].preference==2)
			cout<<mybop[i].bopname<<endl;
	}
}
