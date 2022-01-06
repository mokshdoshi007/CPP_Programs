#include <conio.h>
#include <iostream.h>
int main()
{
clrscr();
int i,j,m[12],t[4];
float p[4];
for(i=0; i<4; i++)
{
cout<<"Enter Marks in 3 Subjects for Student "<<i+1<<endl;
for(j=0; j<3; j++)
cin>>m[3*i+j];
t[i]=m[3*i]+m[3*i+1]+m[3*i+2];
}
cout<<"Roll No\tSub1\tSub2\tSub3\tTotal\tPercentage"<<endl;
for(i=0; i<4; i++)
cout<<i+1<<"\t"<<m[3*i]<<"\t"<<m[3*i+1]<<"\t"<<m[3*i+2]<<"\t"<<t[i]<<"\t"<<(float)t[i]/3<<endl;
getch();
return 0;
}