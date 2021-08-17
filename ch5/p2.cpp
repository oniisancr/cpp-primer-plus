#include<iostream>
#include<array>
const int Size=101;
int main()
{
	using namespace std;
	array<long double,Size> res;
	res[0]=res[1]=1;
	for(int i=2;i<Size;i++)
		res[i]=i*res[i-1];
	cout<<"100! = "<<res[Size-1]<<endl;
	return 0;
}
