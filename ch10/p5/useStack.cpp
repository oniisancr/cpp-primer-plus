#include"stack.h"
#include<iostream>

int main()
{
	Stack stack;
	customer cus1={"ruirui",732.32};
	customer cus2={"mm",833.90};
	customer temp;
	double sum=0;
	stack.push(cus1);
	stack.push(cus2);
	stack.pop(temp);
	sum=sum+temp.payment;
	std::cout<<"sum:"<<sum<<"\n";
	stack.pop(temp);
	sum=sum+temp.payment;
	std::cout<<"sum:"<<sum<<"\n";
	return 0;
}
