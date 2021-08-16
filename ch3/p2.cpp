#include<iostream>
const float ft=12.0;
const float in2meter=0.0254;
const float kg2pound=2.2;
int main() 
{
	using namespace std;
	float tailft,tailin,tail,heavy,tailmeter,heavyKg;
	cout<<"tall in ft and in: ";
	cin>>tailft;
	cin>>tailin;
	cout<<"heavy in pound: ";
	cin>>heavy;
	tail=tailft*ft+tailin;
	tailmeter=tail*in2meter;
	heavyKg=heavy/kg2pound;
	cout<<"BMI:"<<heavyKg/(tailmeter*tailmeter)<<endl;
	return 0;
}
