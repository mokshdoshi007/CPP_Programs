#include<conio.h>
#include<iostream.h>
class Interest
{
	public :
	float si;
	Interest(int principal, int year, int rate)
	{
	si=principal*year*rate*0.01;
	cout<<"Simple Interest @ entered rate : "<<si<<endl;
	}
	Interest(int principal, int year, float rate)
	{
	si=principal*year*rate*0.01;
	cout<<"Simple Interest @ entered 2.5% rate : "<<si<<endl;
	}
};
int main()
{
clrscr();
int pa,y,r;
cout<<"Enter Principal Amount : ";
cin>>pa;
cout<<"Enter Year : ";
cin>>y;
cout<<"Enter Rate of Interest : ";
cin>>r;
Interest a(pa,y,r);
Interest b(pa,y,2.5f);
getch();
return 0;
}