#include <iostream.h>
#include <conio.h>
class abc
{
	public:
	int x,y;
	friend void swap();
};
void swap(int *x, int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main()
{
    clrscr();
    abc a;
    cout<<"Enter 2 Numbers : "<<endl;
    cin>>a.x;
    cin>>a.y;
    swap(&a.x,&a.y);
    cout<<"Number 1 : "<<a.x<<endl;
    cout<<"Number 2 : "<<a.y<<endl;
    getch();
    return 0;
}