#include"cd.h"
#include<iostream>
using namespace std;
int main()
{
	Cd c1=Cd("Beatles","Capital",14,35.5);
	Classic c2=Classic("Piano","Alfred","XM",2,57.17);
	Cd *pcd=&c1;
	c1.report();
	c2.report();
	pcd->report();
	pcd=&c2;
	pcd->report();

	Classic copy;
	copy=c2;
	copy.report();

	return 0;
}
