#include <iostream.h>
#include <conio.h>
#include <string.h>
class abc
{
public:
    char s1[10], s2[10];
    abc(char str1[], char str2[])
    {
	strcpy(this->s1, s1);
	strcpy(this->s2, s2);
    }
    void operator+()
    {
	strcat(s1,s2);
	cout<<"Concated Strings : "<<s1;
    }
};
int main()
{
    clrscr();
    char s1[10],s2[10];
    cout<<"Enter 2 Strings"<<endl;
    cin>>s1>>s2;
    abc a(s1,s2);
    +a;
    getch();
    return 0;
}