#include<iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void showBox(box );
void volBox(box *);

int main()
{
	box box1[4]={
		{"maker1",20.3,22,30,0},
		{"maker2",22.3,12,30.5,0},
		{"maker3",22.3,62,34,0},
		{"maker4",24.3,22.5,37.8,0},
	};
	for(int i=0;i<4;i++)
	{
		showBox(box1[i]);
		volBox(&box1[i]);	
	}
	for(int i=0;i<4;i++)
		showBox(box1[i]);
	return 0;
}
void showBox(box b)
{
	std::cout<<b.maker<<"\t"<<b.height<<"\t"<<b.width<<"\t"<<b.length<<"\t"<<b.volume<<"\n";
}
void volBox(box *b)
{
	b->volume=b->height*b->width*b->length;
}
