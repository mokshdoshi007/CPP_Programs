#include <iostream.h>
#include <conio.h>
class abc
{
	public:
	int x,y;
	friend int max();
};
int max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
    clrscr();
    abc a;
    cout<<"Enter 2 Numbers : "<<endl;
    cin>>a.x;
    cin>>a.y;
    int maximum = max(a.x,a.y);
    cout<<"Maximum : "<<maximum;
    getch();
    return 0;
}