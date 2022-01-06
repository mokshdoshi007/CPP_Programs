#include <conio.h>
#include <iostream.h>
class abc
{
	public :
	int i,j;
	int a[3][3],b[3][3];
	void accept()
	{
	cout<<"Enter 9 Numers for Matrix 1"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>a[i][j];
		}
	}
	}
	void accept2()
	{
	cout<<"Enter 9 Numers for Matrix 2"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>b[i][j];
			b[i][j]+=a[i][j];
		}
	}
	}
	void show()
	{
	cout<<"Addition of 2 Matrix :"<<endl;
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};
int main()
{
clrscr();
abc a;
a.accept();
a.accept2();
a.show();
getch();
return 0;
}