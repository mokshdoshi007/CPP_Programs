#include<conio.h>
#include<iostream.h>
class abc
{
	public :
	float a,b,c;
	abc()
	{
	a=20.0;
	b=10.0;
	c=a+b;
	cout<<"Addition : "<<c<<endl;
	c=a-b;
	cout<<"Subtraction : "<<c<<endl;
	c=a*b;
	cout<<"Multiplication : "<<c<<endl;
	c=a/b;
	cout<<"Division : "<<c<<endl;
	}
};
int main()
{
clrscr();
abc a;
getch();
return 0;
}