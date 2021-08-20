#include"sale.h"
#include<iostream>
namespace SALES{
	void setSales(Sales & s, const double ar[], int n)
	{
		double max,min,sum=0;
		max=min=ar[0];
		n=n>4?4:n;
		for(int i=0;i<n;i++)
		{
			if(max<ar[i])max=ar[i];
			if(min>ar[i])min=ar[i];
			s.sales[i]=ar[i];
			sum+=ar[i];
		}
		s.average=sum/n;
		s.max=max;
		s.min=min;
		if(n<4)
		{
			for(int i=n;i<4;i++)
				s.sales[i]=0;
		}
	}

	void setSales(Sales & s)
	{
		double max,min,sum=0;
		for(int i=0;i<4;i++)
		{
			std::cout<<"Enter #"<<i+1<<":";
			if(!(std::cin>>s.sales[i])){
				std::cout<<"Input error!\n";
				return;
			}
			if(i==0)
			{
				max=min=sum=s.sales[i];
				continue;
			}
			if(max<s.sales[i])max=s.sales[i];
			if(min>s.sales[i])min=s.sales[i];
			sum+=s.sales[i];
		}
		s.average=sum/4;
		s.max=max;
		s.min=min;
	}
	void showSales(const Sales &s)
	{
		using namespace std;
		cout<<"double: "<<s.sales[0]<<" "<<s.sales[1]<<" ";
		cout<<s.sales[2]<<" "<<s.sales[3]<<endl;
		cout<<"average: "<<s.average<<endl;
		cout<<"max: "<<s.max<<endl;
		cout<<"min: "<<s.min<<endl;
	}
}
