#include<iostream>
#include<string>
struct Pizza{
	std::string brand;
	float radius;
	float weight;
};
int main()
{
	using namespace std;
	float diam=0.;
	Pizza *pizza=new Pizza;
	cout<<"Enter pizza diam: ";
	cin>>diam;
	cin.get();		//删除换行符
	pizza->radius=diam/2; 
	cout<<"Enter pizza brand: ";
	getline(cin,pizza->brand);
	cout<<"Enter pizza weight: ";
	cin>>pizza->weight;
	cout<<"Brand: "<<pizza->brand<<endl;
	cout<<"Radius: "<<pizza->radius<<endl;
	cout<<"Weight: "<<pizza->weight<<endl;
	delete pizza;
	return 0;
}
