#include <iostream.h>
#include <conio.h>
int main()
{
clrscr();
int *p = new int(5);
cout<<"Value of p : "<<*p<<endl;
delete p;
getch();
return 0;
}