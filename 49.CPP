#include <iostream.h>
#include <conio.h>
template <class T>
T swap(T *x, T *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main()
{
	clrscr();
	int a,b;
	cout<<"Enter 1st Number : ";
	cin>>a;
	cout<<"Enter 2nd Number : ";
	cin>>b;
	swap(&a,&b);
	cout<<"1st Number : "<<a<<endl;
	cout<<"2nd Number : "<<b<<endl;
	getch();
	return 0;
}