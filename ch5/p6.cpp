#include<iostream>
const int MonthSize=12;
int main()
{
	using namespace std;
	int month[3][MonthSize];
	string hint;
	int sum[3]={0,0,0};
	for(int j=0;j<3;j++)
		for(int i=0;i<MonthSize;i++)
		{
			hint="第"+to_string(j+1)+"年"+to_string(i+1)+"月份的销售量: ";//to_string c++11方法
			cout<<hint;
			cin>>month[j][i];
			sum[j]+=month[j][i];
		}
	for(int m=0;m<3;m++)
	{
	cout<<"第"<<m+1<<"年一共销售："<<sum[m]<<" 册图书。"<<endl;
	}
	cout<<"三年共销售："<<sum[0]+sum[1]+sum[2]<<endl;
	return 0;
}
