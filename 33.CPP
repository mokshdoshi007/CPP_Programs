#include<conio.h>
#include<iostream.h>
class abc
{
	public :
	void calc(int a, int b, int c)
	{
	cout<<"Addition : "<<a+b+c<<endl;
	}
	int calc(int a, int b)
	{
	return a-b;
	}
	int calc(int a, int b, int c, int d)
	{
	return a*b*c*d;
	}
	float calc(float a, float b)
	{
	return (float)a/(float)b;
	}
};
int main()
{
clrscr();
abc ob;
int a,b;
cout<<"Enter 2 Numbers"<<endl;
cin>>a;
cin>>b;
ob.calc(a,b,0);
cout<<"Subtraction : "<<ob.calc(a,b)<<endl;
cout<<"Multiplication : "<<ob.calc(a,b,1,1)<<endl;
cout<<"Division : "<<ob.calc((float)a,(float)b)<<endl;
getch();
return 0;
}