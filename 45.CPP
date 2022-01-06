#include <iostream.h>
#include <conio.h>
#include <fstream.h>
int main()
{
	clrscr();
	ofstream fout;
	fout.open("data.txt",ios::app);
	cout<<"Enter Data to write in file (0 to stop)"<<endl;
	while (1)
	{
		char a[20];
		cin>>a;
		if (a[0]=='0' && a[1]=='\0')
			break;
		fout<<a<<endl;
	}
     fout.close( );
     getch();
     return 0;
}