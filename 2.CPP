#include<iostream.h>
#include<conio.h>
class abc
{
public:
	int factorial(int n)
	{
		if(n==1)
			return 1;
		else
			return (n*factorial(n-1));
	}
	int fibo(int x)
	{
		if(x==1 || x==0)
			return x;
		else
			return (fibo(x-1)+fibo(x-2));
	}
	void fibonacci(int n)
	{
		int i;
		for(i=0;i<n;i++)
			cout<<fibo(i)<<" ";
	}
};
void main()
{
	abc a;
	int i,n;
	clrscr();
	cout<<"Enter Number of Fibonacci Terms Required : ";
	cin>>n;
	a.fibonacci(n);
	cout<<endl;
	cout<<"Enter Number to Find Factorial : " ;
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<a.factorial(n);
	getch();
}