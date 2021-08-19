#include<iostream>
int size=0;

void inputNumber(float *arr);
void show(float *arr);
float getMean(float *arr);

int main()
{
	float score[10];
	inputNumber(score);
	show(score);
	std::cout<<"Mean: "<<getMean(score)<<std::endl;
	return 0;
}
void inputNumber(float *arr)
{
	using namespace std;
	cout<<"Enter golf scores （maxsize 10, q to qiut): "<<endl;
	size++;
	cin>>arr[size-1];
	while(cin)	//类型不匹配false
	{
		size++;
		cin>>arr[size-1];
	}
	size=size>1?size-1:0;
}
void show(float *arr)
{
	if(size==0)return;
	for(int i=0;i<size;i++)
		std::cout<<arr[i]<<" ";
	std::cout<<std::endl;
}
float getMean(float *arr)
{
	if(size==0)return 0.0;
	float sum=0;
	for(int i=0;i<size;i++)
		sum+=arr[i];
	return sum/size;
}
