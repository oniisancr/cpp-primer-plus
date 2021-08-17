#include<iostream>
const float init=100;
int main()
{
	using namespace std;
	int year=0;
	float DaphneSum=init,CleoSum=init;
	do
	{
		year++;
		DaphneSum+=0.1*init;
		CleoSum=1.05*CleoSum;
	}
	while(CleoSum<=DaphneSum);
	cout<<"第"<<year<<" 年"<<endl;
	cout<<"Daphne: "<<DaphneSum<<endl;
	cout<<"Cleo: "<<CleoSum<<endl;
	return 0;
}
