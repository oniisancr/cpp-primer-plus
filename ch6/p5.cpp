#include<iostream>
int main()
{
	using namespace std;
	float money,tax=0;
	cout<<"Income: ";
	cin>>money;
	cin.ignore(1024,'\n'); //删除多余的输入，一次只要一个数字。
	while(cin)	//当类型不对时，cin=0
	{	
		if(money<0)break;
		else if(money<=5000)
			tax=0;
		else if(money>5000&&money<=15000)
			tax=(money-5000)*0.1;
		else if(money>15000&&money<=35000)
			tax=10000*0.1+(money-15000)*0.15;
		else if(money>35000)
			tax=10000*0.1+20000*0.15+(money-35000)*0.2;
		cout<<money<<" pay tax: "<<tax<<endl;
		cout<<"Income: ";
		cin>>money;
		cin.ignore(1024,'\n');
	}
	return 0;
}
