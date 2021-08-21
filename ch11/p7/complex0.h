#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include<iostream>

class complex0
{
	private:
		double m_real;
		double m_imaginary;
	public:
		complex0(){m_real=m_imaginary=0;}
		complex0(double r, double i):m_real(r),m_imaginary(i){}
		~complex0(){}
		complex0 operator+(const complex0)const;
		complex0 operator-(const complex0)const;
		complex0 operator*(const complex0)const;
		complex0 operator~()const;
		friend std::ostream & operator<<(std::ostream & os, const complex0 cmplx);	
		friend std::istream & operator>>(std::istream & is, complex0 & cmplx);	
		friend complex0 operator*(double,const complex0);
};
#endif
