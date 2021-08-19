#include<iostream>
const int Max = 5;

double * fill_array(double ar[], int limit);
void show_array(const double ar[], double * end);
void revalue(double r, double ar[], double * end);

int main()
{
	using namespace std;
	double properties[Max];
	
	double *end=fill_array(properties,Max);	
	if(end!=NULL)
	{
		cout<<"Enter revaluation factor: ";
		double factor;
		while(!(cin>>factor))	//bad input
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input; Please enter a number: ";
		}
		revalue(factor, properties,end);
		show_array(properties, end);
	}
	cout<<"Done.\n";
	cin.get();
	cin.get();
	return 0;
}
double *fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i=0;
	for(i=0;i<limit; i++)
	{
		cout<<"Enter value #"<<i+1<<" :";
		cin>> temp;
		if(!cin)//bad input
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input; Input process terminated.\n";
			break;
		}
		else if(temp<0)break;
		ar[i]=temp;
	}
	return &ar[i-1];
}
void show_array(const double ar[], double * end)
{
	if(end==NULL)return;
	for(int i=0;&ar[i]!=end;i++)
		std::cout<<ar[i]<<" ";
	std::cout<<*end<<"\n";
}
void revalue(double r, double ar[], double * end)
{
	if(end==NULL)return;
	for(int i=0;&ar[i]!=end;i++)
		ar[i]*=r;
	(*end)*=r;
}


