#include <iostream.h>
#include <conio.h>
#include <fstream.h>
int main()
{
	clrscr();
	ofstream fout;
	fout.open("data.txt");
	cout<<"Enter Data to write in file (0 to stop)"<<endl;
	while (1)
	{
		char a[20];
		cin>>a;
		if (a[0]=='0' && a[1]=='\0')
			break;
		fout<<a<<endl;
	}
	fout.close();
	ifstream fin;
	fin.open("data.txt");
	cout<<"\nData read from file :"<<endl;
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
