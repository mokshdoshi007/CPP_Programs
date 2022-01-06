#include <iostream.h>
#include <conio.h>
template <class T>
void sort(T a[], int n)
{
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (a[j]<a[j - 1])
			{
				a[j]+=a[j-1];
				a[j-1]=a[j]-a[j-1];
				a[j]-=a[j-1];
			}
		}
	}
}
int main()
{
	clrscr();
	int a[5] = {5,1,2,3,4};
	sort(a, 5);
	cout<<"Sorted Array : ";
	for (int i = 0; i<5; i++)
		cout << a[i] << " ";
	getch();
	return 0;
}