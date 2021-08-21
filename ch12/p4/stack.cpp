#include"stack.h"

Stack::Stack(int n)
{
	size=n;
	pitems=new Item[size];
	top=0;
}
Stack::Stack(const Stack &st)
{
	size=st.size;
	top=st.top;
	pitems=new Item[size];
	for(int i=0;i<top;i++)
		pitems[i]=st.pitems[i];
}
Stack::~Stack()
{
	delete [] pitems;

}
bool Stack::push(const Item & item)
{
	if(!isfull())
	{
		pitems[top]=item;
		top++;
		return true;
	}
	else return false;
}
bool Stack::pop(Item &item)
{
	if(!isempty())
	{
		item=pitems[--top];
		return true;
	}else return false;
}
Stack & Stack::operator=(const Stack &st)
{
	if(this==&st)return *this;
	delete [] pitems;
	size=st.size;
	top=st.top;
	pitems=new Item[size];
	for(int i=0;i<top;i++)
		pitems[i]=st.pitems[i];
	return *this;
}
