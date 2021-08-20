#include<iostream>
#include<cstring>

template<typename T>
T maxn(T *arr, int n)
{
	T max=0;
	for(int i=0;i<n;i++)
		max=max>arr[i]?max:arr[i];
	return max;
}
template<> char* maxn(char *p[], int n);
int main()
{
	using namespace std;
	int testInt[]={1,2,3,4,5,6};
	double testDouble[]={4,5,3,1};
	char *testStr[]={
		"hdadhjka",
		"sajdka11131",
		"dad",
		"dadasdada",
		"mknmkjnkjjnkjnjknkj"
	};
	cout<<"Max Int: "<<maxn(testInt,6)<<endl;
	cout<<"Max Double: "<<maxn(testDouble,4)<<endl;
	cout<<"Max string: "<<maxn(testStr,5)<<endl;
	return 0;
}

template<> char * maxn(char *arr[], int n)
{
	int maxlen=0;
	char* result=NULL;
	if(n<1)return result;
	for(int i=0;i<n;i++)
	{
		if(maxlen<strlen(arr[i]))
		{
			maxlen=strlen(arr[i]);
			result=arr[i];
		}
	}
	return result;
}
