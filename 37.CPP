#include <iostream.h>
#include <conio.h>
class cricketer
{
	public :
	int runs,innings;
	void input()
	{
		cout<<"Enter Total Runs : ";
		cin>>runs;
		cout<<"Enter Innings Taken : ";
		cin>>innings;
	}
};
class batsman : public cricketer
{
	public :
	float avg;
	void calc()
	{
	avg = (float)runs/(float)innings;
	}
	void print()
	{
		cout<<"Total Runs : "<<runs<<endl;
		cout<<"Average : "<<avg<<endl;
	}
};
int main()
{
clrscr();
batsman b;
b.input();
b.calc();
b.print();
getch();
return 0;
}