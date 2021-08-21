#include"cow.h"
#include<iostream>

int main()
{
	Cow cow1;
	Cow cow2=Cow("mm","eat eat  hah1a",20);
	Cow cow3(cow2);
	cow1=cow2;
	std::cout<<"Cow1\n";
	cow1.showCow();
	std::cout<<"Cow2\n";
	cow2.showCow();
	std::cout<<"Cow2\n";
	cow3.showCow();
	return 0;
}
