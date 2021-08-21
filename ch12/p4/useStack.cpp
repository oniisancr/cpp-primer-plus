#include"stack.h"
#include<iostream>

int main()
{
	Stack stack1;
	Stack stack2(5);
	customer cus1={"ruirui",732.32};
	customer cus2={"mm",833.90};
	customer temp;
	double sum=0;
	stack1.push(cus1);
	stack1.push(cus2);
	stack2=stack1;
	Stack stack3=Stack(stack2);
	stack1.pop(temp);
	std::cout<<"stack1 name:"<<temp.fullname<<" payment: "<<temp.payment<<"\n";
	stack2.pop(temp);
	std::cout<<"stack2 name:"<<temp.fullname<<" payment: "<<temp.payment<<"\n";
	stack3.pop(temp);
	std::cout<<"stack3 name:"<<temp.fullname<<" payment: "<<temp.payment<<"\n";

	return 0;
}
