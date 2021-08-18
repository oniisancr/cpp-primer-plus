#include<iostream>
#include<fstream>
#include<cstdlib>	//for exit()
int main()
{

	using namespace std;
	string filename="p7.cpp";
	string temp;
	int sum=0;
	char ch;
	ifstream inFile;
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout<<"Couldn't open the file "<<filename<<endl; 
		exit(EXIT_FAILURE);
	}
	inFile>>temp;
	sum=temp.size();
	while(inFile.good()) //not at EOF -- infile.eof() or inFile>>temp neither is ok
	{
		inFile>>temp;
		sum+=temp.size();
	}
	if(inFile.eof())
		cout<<"File "<<filename<<" has "<<sum<<" charactors."<<endl;	
	else if(inFile.fail())	//类型不匹配
		cout<<"data mismatch"<<endl;
	else if(inFile.bad())	//文件或者硬件损坏  or just else
		cout<<" unknown reason"<<endl;
	return 0;
}
