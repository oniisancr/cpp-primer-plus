#include<iostream>
#include<array>

int main()
{
	using namespace std;
	array<double,10> num;
	int n=0,bigger=0;
	double sum=0,mean=0;
	cin>>num[n];
	while(!(cin.fail()))
	{
		sum+=num[n];
		n++;
		cin>>num[n];
	}
	mean=sum/(n>0?n:1);		//防止除0
	cout<<"average: "<<mean<<endl;
	for(int i=0;i<n;i++)
		if(num[i]>mean)bigger++;
	cout<<"bigger than average : "<<bigger<<endl;	
	return 0;
}
