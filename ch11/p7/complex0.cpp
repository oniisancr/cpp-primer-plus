#include"complex0.h"

complex0 complex0::operator+(const complex0 cmplx)const
{
	complex0 temp;
	temp.m_real=this->m_real+cmplx.m_real;
	temp.m_imaginary=this->m_imaginary+cmplx.m_imaginary;
	return temp;
}
complex0 complex0::operator-(const complex0 cmplx)const
{
	complex0 temp;
	temp.m_real=this->m_real-cmplx.m_real;
	temp.m_imaginary=this->m_imaginary-cmplx.m_imaginary;
	return temp;
}
complex0 complex0::operator*(const complex0 cmplx)const
{
	complex0 temp;
	temp.m_real=this->m_real*cmplx.m_real-this->m_imaginary*cmplx.m_imaginary;
	temp.m_imaginary=this->m_real*cmplx.m_imaginary+this->m_imaginary*cmplx.m_real;
	return temp;
}
complex0 complex0::operator~()const
{
	complex0 temp;
	temp.m_real=this->m_real;
	temp.m_imaginary=-(this->m_imaginary);
	return temp;
}
std::ostream & operator<<(std::ostream & os, complex0 cmplx)
{
	os<<"("<<cmplx.m_real<<","<<cmplx.m_imaginary<<"i)";	
	return os;
}
std::istream & operator>>(std::istream & is, complex0 & cmplx)
{
	std::cout<<"real: ";
	is>>cmplx.m_real;
	std::cout<<"imaginary: ";
	is>>cmplx.m_imaginary;
	return is;
}
complex0 operator*(double m, const complex0 cmplx)
{
	complex0 temp;
	temp.m_real=m*cmplx.m_real;
	temp.m_imaginary=m*cmplx.m_imaginary;
	return temp;
}
