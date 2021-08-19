#include<iostream>
int Fill_array(double *, int);
void Show_array(double *, int);
void Reverse_array(double *, int);

int main()
{
	const int SIZE=5;
	int realSize=0;
	double array[SIZE];
	realSize=Fill_array(array,SIZE);
	Show_array(array,realSize);

	Reverse_array(array,realSize);
	Show_array(array,realSize);

	Reverse_array(&array[1],realSize-2);
	Show_array(array,realSize);
	return 0;
}
int Fill_array(double * arr, int size)
{
	int tag=0;
	std::cout<<"Enter double array less than "<<size<<" numbers (q to quit): ";
	while(tag<size && std::cin>>arr[tag]) //&& 先左后右
	{
		tag++;
	}	
	if(std::cin.fail() || tag==size)tag--;	//若提前终止，类型错误  或者 超出size个
	return tag+1;		//返回个数
}
void Show_array(double *arr, int size)
{
	for(int i=0;i<size;i++)
		std::cout<<arr[i]<<" ";
	std::cout<<std::endl;
}
void Reverse_array(double *arr, int size)
{
	double temp=0;
	for(int i=0;i<size/2;i++) //让前面一半与后面一半交换
	{
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
}
