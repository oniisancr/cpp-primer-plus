#include<iostream>
#include<string>
struct CandyBar{
	std::string brand;
	float weight;
	int calorie;
};
int main()
{
	using namespace std;
	CandyBar *snack=new CandyBar[3]{	//c++11 大括号初始化
		{"Mocha Munch",2.3,350},
		{"b1",2.4,333},
		{"b2",2.3,444}
	};
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Brand: "<<snack[i].brand<<endl;
		cout<<"Weight: "<<snack[i].weight<<endl;
		cout<<"Calorie: "<<snack[i].calorie<<endl;
	
	}
	delete [] snack;
	return 0;
}
