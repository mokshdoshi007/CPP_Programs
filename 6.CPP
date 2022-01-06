#include <conio.h>
#include <iostream.h>
class abc
{
public:
char name[20];
int number;
int balance;
char type[10];
void assign()
{
cout<<"Enter your Name : ";
cin>>name;
cout<<"Enter A/C Number : ";
cin>>number;
cout<<"Enter Account Type : ";
cin>>type;
cout<<"Enter Amount to Deposit for 1st Time : ";
cin>>balance;
}
void deposit()
{
int a;
cout<<"Enter Amount to Deposit : ";
cin>>a;
balance+=a;
cout<<"Deposit Successful";
}
void withdraw()
{
int w;
cout<<"Enter Amount to Withdraw : ";
cin>>w;
if(w>balance)
cout<<"Insufficient Balance";
else
{
balance-=w;
cout<<"Withdrawal Successful";
}
}
void display()
{
cout<<"Name : "<<name<<endl;
cout<<"Balance : "<<balance;
}
};
int main()
{
abc a;
clrscr();
int ch=0;
a.assign();
while(ch!=4)
{
cout<<endl<<"1. Deposit  Amount"<<endl;
cout<<"2. Withdraw Amount"<<endl;
cout<<"3. Display Balance"<<endl;
cout<<"4. Exit Program"<<endl;
cout<<"Enter Number to perform operation : ";
cin>>ch;
if(ch==1)
a.deposit();
else if(ch==2)
a.withdraw();
else if(ch==3)
a.display();
else if(ch==4)
cout<<"Thank You"<<endl;
else
cout<<"Invalid Choice"<<endl;
}
getch();
return 0;
}