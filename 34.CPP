#include <iostream.h>
#include <conio.h>
#include <string.h>
class abc
{
public:
    int x[3], y[3],i;
    abc(int a[], int b[])
    {
	for(i=0; i<3; i++)
	{
		x[i]=a[i];
		y[i]=b[i];
	}
    }
    void operator+()
    {
	cout<<"Addition of 2 Matrix :";
	for(i=0; i<3; i++)
	{
	x[i]+=y[i];
	cout<<" "<<x[i];
	}
    }
};
int main()
{
    clrscr();
    int i,x[3],y[3];
    cout<<"Enter 3 Numbers for Matrix 1"<<endl;
    for(i=0; i<3; i++)
	cin>>x[i];
    cout<<"Enter 3 Numbers for Matrix 2"<<endl;
    for(i=0; i<3; i++)
	cin>>y[i];
    abc a(x,y);
    +a;
    getch();
    return 0;
}