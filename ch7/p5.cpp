#include<iostream>

unsigned long calFac(unsigned num);
int main()
{

	using namespace std;
	unsigned  number;
	cout<<"Enter a number to calculate factorial: ";
	while(cin>>number && number>=0)
	{
		cout<<"Factorial: "<<calFac(number)<<endl;
		cout<<"Enter a number to calculate factorial: ";
	}
	cout<<"Bye"<<endl;
	return 0;
}
unsigned long calFac(unsigned num){
	unsigned long result=0, m;	
	m=num;
	if(num==0)return 1;
	result=m*calFac(num-1);
	return result;
}
