#include<conio.h>
#include<iostream.h>
class abc
{
	public :
	int add(int a, int b)
	{
	return a+b;
	}
	int sub(int a, int b)
	{
	return a-b;
	}
	int mul(int a, int b)
	{
	return a*b;
	}
	float div(int a, int b)
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
cout<<"Addition : "<<ob.add(a,b)<<endl;
cout<<"Subtraction : "<<ob.sub(a,b)<<endl;
cout<<"Multiplication : "<<ob.mul(a,b)<<endl;
cout<<"Division : "<<ob.div(a,b)<<endl;
getch();
return 0;
}