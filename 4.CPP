#include <conio.h>
#include <iostream.h>
class abc
{
	public :
	int i,j;
	int a[3][3];

	void accept()
	{
	cout<<"Enter 9 Numers"<<endl;
	for(i=0; i<3; i++)
	{
	for(j=0; j<3; j++)
	cin>>a[i][j];
	}
	}
	void print()
	{
	cout<<"Matrix is :"<<endl;
	for(i=0; i<3; i++)
	{
	for(j=0; j<3; j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}
	}
};
int main()
{
clrscr();
abc a;
a.accept();
a.print();
getch();
return 0;
}