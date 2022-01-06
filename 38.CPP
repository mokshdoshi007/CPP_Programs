#include <iostream.h>
#include <conio.h>
class person
{
	public :
	char name[10];
	int age;
	void read()
	{
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Age : ";
		cin>>age;

	}
	void show()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
	}

};
class student : public person
{
	public :
	float percent;
	void getpercent()
	{
		read();
		cout<<"Enter Percentage	: ";
		cin>>percent;
	}
	void printpercent()                s
	{
		show();
		cout<<"Percentage : "<<percent<<endl;
	}
};
class teacher : public person
{
	public :
	int salary;
	void getsalary()
	{
		read();
		cout<<"Enter Salary : ";
		cin>>salary;
	}
	void printsalary()
	{
		show();
		cout<<"Salary : "<<salary<<endl;
	}

};
int main()
{
clrscr();
student s;
s.getpercent();
s.printpercent();
teacher t;
t.getsalary();
t.printsalary();
getch();
return 0;
}