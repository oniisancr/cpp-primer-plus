#include<iostream>

int main()
{
	using namespace std;
	int num=0;
	cout<<"Enter number of rows: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(j>=num-i-1)
			{
				cout<<"*";
				continue;
			}
			cout<<".";

		}
		cout<<endl;
	}
	
	return 0;
}
