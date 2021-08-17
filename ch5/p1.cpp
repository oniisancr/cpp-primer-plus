#include<iostream>

int main()
{
	using namespace std;
	int sum=0;
	int m,n,i;
	cin>>m;
	cin>>n;
	for(i=m;i<=n;i++)
		sum+=i;	
	cout<<sum<<endl;
	return 0;
}
