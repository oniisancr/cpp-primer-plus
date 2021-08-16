#include<iostream>
const float kilo2mile=0.6214;
const float gal2gas=3.785;

int main()
{
	using  namespace std;
	float kiloGas;
	cout<<"每100公里消耗汽油量（升）：";
	cin>>kiloGas;
	cout<<"每加仑多少英里："<<(kilo2mile*100)/(kiloGas/gal2gas)<<endl;
	return 0;
}
