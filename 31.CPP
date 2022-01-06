#include <conio.h>
#include <iostream.h>
class abc
{
public:
void area(int r)
{
	cout<<"Area of Circle : "<<3.14*r*r<<endl;
}
void area(float h, float b)
{
	cout<<"Area of Triangle : "<<(h*b*0.5)<<endl;
}
void area(int l, int b)
{
	cout<<"Area of Rectangle : "<<(l*b)<<endl;
}
};
int main()
{
clrscr();
abc a;
int r,l,b;
float h,ba;
cout<<"Enter Radius of Circle : ";
cin>>r;
cout<<"Enter Length and Breadth of Rectangle : ";
cin>>l>>b;
cout<<"Enter Height and Base of Triangle : ";
cin>>h>>ba;
a.area(r);
a.area(l,b);
a.area(h,ba);
getch();
return 0;
}