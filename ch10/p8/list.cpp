#include"list.h"

bool List::addItem(Item &item) 
{
	if(isFull())
		return false;
	items[size]=item;
	size++;
	return true;
}
void List::visit(void (*pf)(Item &))
{
	if(isEmpty())return;
	for(int i=0;i<size;i++)
		(*pf)(items[i]);
}
