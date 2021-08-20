#include<iostream>

void printStr(const char *s, int flag=0)
{
	static int times=0; 
	if(flag!=0)
	{
		std::cout<<"Times: "<<times<<"\n";
		return;
	}
	std::cout<<s<<"\n";
	times++;
}
int main()
{
	char s1[]="ggggggghahaha";
	char s2[]="hihi !";
	printStr(s1);
	printStr(s2);
	printStr(s2,1);
	return 0;
}
