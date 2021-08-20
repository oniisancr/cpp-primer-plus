#include<iostream>
#include"sale.h"

int main()
{
	using namespace SALES;
	double daA[4]={1,2,3,4};
	double daB[3]={5,3,2.2};
	Sales sale1,sale2;
	setSales(sale1,daB,3);
	setSales(sale2);
	showSales(sale1);
	showSales(sale2);
	return 0;
}
