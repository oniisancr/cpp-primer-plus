#include<iostream>
#include<string>

struct car{
	std::string make;
	int year;
};
int main(){
	using namespace std;
	int num;
	cout<<"How many cars do you wish to catelog? ";
	cin>>num;	//会留下换行符
	cin.get();	//删除换行符用
	car *mycar=new car[num];
	for(int i=0;i<num;i++)
	{
		cout<<"Car #"<<i+1<<":"<<endl;
		cout<<"Please enter the make: ";
		getline(cin,mycar[i].make);
		cout<<"Please enter the year made: ";
		cin>>mycar[i].year;
		cin.get();
	}
	cout<<"Here is your collection: "<<endl;
	for(int j=0;j<num;j++)
		cout<<mycar[j].year<<" "<<mycar[j].make<<endl;
	delete [] mycar;
	return 0;
}
