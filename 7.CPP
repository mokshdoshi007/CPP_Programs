#include <conio.h>
#include <iostream.h>
class abc
{
public :
int price[10];
char author[10][10];
char title[10][10];
char publisher[10][10];
	void assign(int i)
	{
		cout<<"Enter Book Title : ";
		cin>>title[i];
		cout<<"Enter Book Author : ";
		cin>>author[i];
		cout<<"Enter Book Publisher : ";
		cin>>publisher[i];
		cout<<"Enter Book Price : ";
		cin>>price[i];
	}
	void display(int i)
	{
	int j;
		for (j=0; j<i; j++)
		{
		cout<<"For Book "<<j+1<<endl;
		cout<<"Title : "<<title[j]<<endl;
		cout<<"Author : "<<author[j]<<endl;
		cout<<"Publisher : "<<publisher[j]<<endl;
		cout<<"Price : "<<price[j]<<endl;
		}
	}
};
int main()
{
clrscr();
abc a;
int ch=0,i=0;
while(ch!=3)
{
cout<<endl;
cout<<"1. Assign  Values"<<endl;
cout<<"2. Display Values"<<endl;
cout<<"3. Exit Program"<<endl;
cout<<"Enter Your Choice : ";
cin>>ch;
if(ch==1)
{
a.assign(i);
i++;
}
else if(ch==2)
a.display(i);
else if(ch==3)
cout<<"Thank You";
else
cout<<"Invalid Choice"<<endl;
}
getch();
return 0;
}