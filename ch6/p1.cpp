#include<iostream>
#include<cctype>
#include<string>

int main()
{
	using namespace std;
	string temp="";
	char ch;
	while((ch=cin.get())!='@')
	{
		if(isdigit(ch))
			continue;
		else if(isupper(ch))
			temp+=char(ch+32);
		else if(islower(ch))
			temp+=char(ch-32);
		else temp+=ch;
	}
	int i;
	for(i=temp.size()-1;i>=0;i--)
		cout<<temp[i];
	cout<<endl;
	return 0;
}
