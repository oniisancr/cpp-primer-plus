#include"list.h"
#include<iostream>
void doubleMoney(Item &item);
void showItem(Item &item);
int main()
{
	List list;
	Item item1={"ruiruri",70003.23};
	Item item2={"mm",732930.12};
	list.addItem(item1);
	list.addItem(item2);
	list.visit(showItem);
	list.visit(doubleMoney);
	list.visit(showItem);
	return 0;
}
void doubleMoney(Item &item)
{
	item.money*=2;
}
void showItem(Item &item)
{
	std::cout<<item.name<<" "<<item.money<<"\n";
}
