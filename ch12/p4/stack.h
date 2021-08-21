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
		Item *pitems;
		int top;	//index for top stack item
		int size;	//number of elements 
	public:
		Stack(int n=Max);
		Stack(const Stack &st);
		~Stack();
		bool isempty() const{return top==0;}
		bool isfull() const {return top==size;}
		bool push(const Item &item);
		bool pop(Item & item);
		Stack & operator=(const Stack &st);
};
#endif
