#ifndef PERSON_H_
#define PERSON_H_
#include<string>
class Person
{
private:
	std::string name;
public:
	Person(std::string s): name(s){}
	virtual ~Person(){}
	virtual void show();
};
class Gunslinger: virtual public Person
{
private:
	double useWeaponTime;
	int notch;
public:
	Gunslinger(std::string s, double time, int n):Person(s), useWeaponTime(time), notch(n){}
	~Gunslinger(){}
	virtual double draw();
	virtual void show();
};
class PokerPlayer: virtual public Person
{
private:

public:
	PokerPlayer(std::string s):Person(s){};
	~PokerPlayer(){}
	virtual int draw();	
};

class BadDude: public Gunslinger, public PokerPlayer
{
private:

public:
	BadDude(std::string s, double t, int n):Gunslinger(s,t,n),PokerPlayer(s),Person(s){}
	~BadDude(){}
	double Gdraw();
	int Cdraw();
	virtual void show();
};
#endif
