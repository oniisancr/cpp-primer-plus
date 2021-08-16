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
	Pizza pizza;
	cout<<"Enter pizza brand: ";
	getline(cin,pizza.brand);
	cout<<"Enter pizza radius: ";
	cin>>pizza.radius;
	cout<<"Enter pizza weight: ";
	cin>>pizza.weight;
	cout<<"Brand: "<<pizza.brand<<endl;
	cout<<"Radius: "<<pizza.radius<<endl;
	cout<<"Weight: "<<pizza.weight<<endl;
	return 0;
}
