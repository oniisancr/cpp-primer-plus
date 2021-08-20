#include<iostream>

template<typename T>
T max5(T *arr)
{
	T max=0;
	for(int i=0;i<5;i++)
		max=max>arr[i]?max:arr[i];
	return max;
}
int main()
{
	using namespace std;
	int testInt[5]={1,2,3,4,5};
	double testDouble[5]={4,5,2,3,1};
	cout<<"Max Int: "<<max5(testInt)<<endl;
	cout<<"Max Double: "<<max5(testDouble)<<endl;
	return 0;
}
