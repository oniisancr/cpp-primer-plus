#include<iostream>
int main()
{
	using namespace std;
	float kilo,gas;
	cout<<"行驶里程（公里）: ";
	cin>>kilo;
	cout<<"消耗汽油（升）：";
	cin>>gas;
	cout<<"每100公里油耗："<<100*gas/kilo<<endl;
	return 0;
}
