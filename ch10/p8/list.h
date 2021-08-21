#ifndef LIST_H_
#define LIST_H_
#include<string>
typedef struct person
{
	std::string name;
	double money;
} Item;
class List
{
	private:
		enum{Max=10};
		Item items[Max];
		int size;
	public:
		List(){size=0;}
		~List(){}
		bool isEmpty() const {return size==0;}
		bool isFull() const {return size==Max;}
		bool addItem(Item &item);
		void visit(void (*pf)(Item &));	
};
#endif
