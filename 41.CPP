#include <iostream.h>
#include <conio.h>
inline int cube (int s)
{
return s*s*s;
}
inline int mul(int a, int b)
{
return a*b;
}
int main()
{
clrscr();
int s,a,b;
cout<<"Enter Number to find Cube : ";
cin>>s;
cout<<"Cube of entered Number : "<<cube(s)<<endl;
cout<<"Enter 2 Numbers to find Multiplication"<<endl;
cin>>a>>b;
cout<<"Multiplication of entered Numbers : "<<mul(a,b);
getch();
return 0;
}