#include"person.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

void Person::show()
{
	std::cout<<"name: "<<name<<"\n";
}
double Gunslinger::draw()
{
	return useWeaponTime;
}
void Gunslinger::show()
{
	Person::show();
	std::cout<<"useWeaponTime: "<<useWeaponTime<<"\n";
	std::cout<<"notch: "<<notch<<"\n";
}
int PokerPlayer::draw()
{
	srand((unsigned)time(NULL));
	int n=std::rand()%51+1;
	return n;
}
double BadDude::Gdraw()
{
	return Gunslinger::draw();
}
int BadDude::Cdraw()
{
	return PokerPlayer::draw();
}
void BadDude::show()
{
	Gunslinger::show();
}
