#include<iostream>

int main()
{
	using namespace std;
	long long pW,pU;
	double percent=0.0;
	cout<<"Enter the word's population: ";
	cin>>pW;
	cout<<"Enter the population of the US: ";
	cin>>pU;
	cout<<"The papulation of the US is "<<100*(pU*1.0)/(pW*1.0)<<"% of the world population"<<endl;
	return 0;
}
