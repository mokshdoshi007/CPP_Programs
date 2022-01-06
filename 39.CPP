#include <iostream.h>
#include <conio.h>
class student
{
	public :
	int rn;
	void getrn()
	{
		cout<<"Enter Roll Number : ";
		cin>>rn;
	}
};
class test : public student
{
	public :
	int mark1, mark2;
	void getmarks()
	{
		cout<<"Enter Marks in Subject 1 : ";
		cin>>mark1;
		cout<<"Enter Marks in Subject 2 : ";
		cin>>mark2;
	}
};
class result : public test
{
	public :
	int total;
	void calculate()
	{
		getrn();
		getmarks();
		total = mark1+mark2;
	}
	void print()
	{
		cout<<"Roll Number : "<<rn<<endl;
		cout<<"Total Marks : "<<total;
	}

};
int main()
{
clrscr();
result r;
r.calculate();
r.print();
getch();
return 0;
}