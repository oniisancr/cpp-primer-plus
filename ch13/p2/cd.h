#ifndef CD_H_
#define CD_H_

class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char *s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void report()const;
	Cd & operator=(const Cd & d);
};
class Classic:public Cd
{
private:
	char * brand;
public:
	Classic(char *s1, char * s2,char * b, int n, double x);
	Classic(const Classic & c);
	Classic();
	~Classic();
	virtual	void report()const;		//继承类可以省略virtual
	Classic & operator=(const Classic & c);
};
#endif
