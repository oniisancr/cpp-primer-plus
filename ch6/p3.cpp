#include<iostream>

int main()
{
	using namespace std;
	char choice;
	cout<<"Please enter one of the following choices:\nc) carnivore p)pianist\n"
		<<"t) tree g) game"<<endl;
	cin>>choice;
	while(!(choice=='c'||choice=='p'||choice=='t'||choice=='g'))
	{
		cin.ignore(1024,'\n');//删除输入队列到回车
		cout<<"Please enter a c, p, t, or g: ";
		cin>>choice;
	}
	switch(choice)
	{
		case 'c':
			cout<<"Foxes are carnivores"<<endl;
			break;
		case 'p': 
			cout<<"Pianist is the person who plays the piano"<<endl;
			break;
		case 't':
			cout<<"A maple is a tree"<<endl;
			break;
		case 'g':
			cout<<"Game is a bad thing"<<endl;
			break;
		default:
			break;
	}
	return 0;
}
