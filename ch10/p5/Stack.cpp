#include"stack.h"

Stack::Stack()
{
	top=0;
}
Stack::~Stack()
{

}
bool Stack::push(const Item & item)
{
	if(top<Max)
	{
		items[top++]=item;
		return true;
	}
	else return false;
}
bool Stack::pop(Item &item)
{
	if(top>0)
	{
		item=items[--top];
		return true;
	}else return false;
}
