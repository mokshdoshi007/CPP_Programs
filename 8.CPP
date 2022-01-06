#include <conio.h>
#include <iostream.h>
class abc
{
public :
int lectures[10];
char lecturer[10][10];
char subject[10][10];
char course[10][10];
	void assign(int i)
	{
		lectures[i]=0;
	}
	void add(int i)
	{
		assign(i);
		cout<<"Enter Lecturer Name : ";
		cin>>lecturer[i];
		cout<<"Enter Subject Name : ";
		cin>>subject[i];
		cout<<"Enter Course Name : ";
		cin>>course[i];
		cout<<"Enter Number of Lectures : ";
		cin>>lectures[i];
	}
	void display(int i)
	{
		int j;
		for (j=0; j<i; j++)
		{
		cout<<"For Lecture "<<j+1<<endl;
		cout<<"Lecturer : "<<lecturer[j]<<endl;
		cout<<"Subject : "<<subject[j]<<endl;
		cout<<"Course : "<<course[j]<<endl;
		cout<<"Number of Lectures : "<<lectures[j]<<endl;
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
cout<<"1. Add  Lectures"<<endl;
cout<<"2. Display Lectures"<<endl;
cout<<"3. Exit Program"<<endl;
cout<<"Enter Your Choice : ";
cin>>ch;
if(ch==1)
{
a.add(i);
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