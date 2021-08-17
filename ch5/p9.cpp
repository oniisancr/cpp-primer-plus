#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string str[100];
	int dex=0;
	do
	{
		cin>>str[dex];
		if(str[dex]=="done")
				break;
		dex++;
	}
	while(true);
	cout<<"Your entered a total of "<<dex<<" words."<<endl;	
	return 0;
}
