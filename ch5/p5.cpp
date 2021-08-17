#include<iostream>
const int MonthSize=12;
int main()
{
	using namespace std;
	int month[MonthSize];
	string hint;
	int sum=0;
	for(int i=0;i<MonthSize;i++)
	{
		hint="请输入第"+to_string(i+1)+"月份的销售量: ";//to_string c++11方法
		cout<<hint;
		cin>>month[i];
		sum+=month[i];
	}
	cout<<"本年一共销售："<<sum<<" 册图书。"<<endl;
	return 0;
}
