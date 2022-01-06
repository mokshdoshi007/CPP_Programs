#include <iostream.h>
#include <conio.h>
#include <fstream.h>
int main()
{
	clrscr();
	ifstream fin;
	fin.open("data.txt");
	cout<<"Data read from file :"<<endl;
	while (fin)
	{
		char a[20];
		fin>>a;
		cout<<a<<endl;
	}
	fin.close();
	getch();
	return 0;
}
