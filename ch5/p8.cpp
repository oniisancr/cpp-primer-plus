#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	char str[100][20];
	int dex=0;
	do
	{
		cin>>str[dex];
		if(strcmp(str[dex],"done")==0)
				break;
		dex++;
	}
	while(true);
	cout<<"Your entered a total of "<<dex<<" words."<<endl;	
	return 0;
}
