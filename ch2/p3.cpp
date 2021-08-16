#include<iostream>
void showStr1();
void showStr2();
int main()
{
	showStr1();
	showStr1();
	showStr2();
	showStr2();
	return 0;
}
void showStr1()
{
	std::cout<<"Three blind mice"<<std::endl;
	return;
}
void showStr2()
{
	std::cout<<"See how they run\n";
	return;
}
