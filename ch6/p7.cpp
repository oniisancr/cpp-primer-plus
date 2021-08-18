#include<iostream>
#include<cctype>
#include<string>

int main()
{
	using namespace std;
	string temp,str;
	int vowel=0,con=0,other=0;
	char head;
	cout<<"Enter words (q to quit):"<<endl;
	cin>>str;
	head=str[0];
	while(str!="q")
	{
		if(isalpha(head))
		{
			head=tolower(str[0]);
			if(head=='a'||head=='e'||head=='i'||head=='o'||head=='u')
				vowel++;
			else con++;
		}else other++;
		cin>>str;
		head=str[0];
	}
	cout<<vowel<<" words begining with vovels"<<endl;
	cout<<con<<" words begining with consonants"<<endl;
	cout<<other<<" others"<<endl;
	return 0;
}
