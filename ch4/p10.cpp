#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<float,3> scores;
	float sum=0;
	cout<<"enter 3 scores: ";
	cin>>scores[0]>>scores[1]>>scores[2];
	for(auto x:scores)	//C++11基于范围的for循环 auto类型推断，也可以用迭代器指针
	{
		sum+=x;
	}
	cout<<"average: "<<sum/scores.size()<<endl;
	return 0;
}
