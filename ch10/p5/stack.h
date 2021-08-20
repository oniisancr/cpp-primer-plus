#ifndef STACK_H_
#define STACK_H_
typedef struct customer
{
	char fullname[35];
	double payment;
} Item;

class Stack
{
	private:
		enum{Max=10};
		Item items[Max];
		int top;
	public:
		Stack();
		~Stack();
		bool isempty() const{return top==0;}
		bool isfull() const {return top==Max;}
		bool push(const Item &item);
		bool pop(Item & item);
};
#endif
