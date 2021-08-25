#include"person.h"
#include<iostream>
int main()
{
	using namespace std;
	BadDude bd=BadDude("test",20.90,3);
	bd.show();
	cout<<"time: "<<bd.Gdraw()<<endl;	
	cout<<"number: "<<bd.Cdraw()<<endl;
	return 0;
}
