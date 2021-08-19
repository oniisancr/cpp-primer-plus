#include<iostream>

long double probability(unsigned numA, unsigned numB, unsigned picks);

int main()
{
	using namespace std;
	double totalA, totalB, choices;
	cout<<"Enter TWO total number of choices on the game card and\n"
		"the total number of picks allowed: ";
	while((cin>>totalA>>totalB>>choices) && choices<=totalB && choices>1)
	{
		cout<<"You have one chance in ";
		cout<<probability(totalA,totalB,choices);
		cout<<" of winning.\n";
		cout<<"Next two numbers (q to quit): ";
	}
	cout<<"Bye\n";
}
long double probability(unsigned numA, unsigned numB, unsigned picks)
{
	long double result=1.0;
	long double n,m;
	unsigned p;

	for(n=numA,p=picks-1;p>0;n--,p--)
		result=result*n/p;
	result=1/result;
	m=numB;
	result=result*(1/m);
	return result;
}
