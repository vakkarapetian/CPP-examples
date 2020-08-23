/* C++ Program - Print Pascal Triangle */
		
#include<iostream.h>
#include<conio.h>
long fact(int);
void main()
{
	clrscr();
	int i, n, c;
	cout<<"Upto how many line (Enter number of rows) : ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(c=0; c<=(n-i-2); c++)
		{
			cout<<" ";
		}
		for(c=0; c<=i; c++)
		{
			cout<<fact(i)/(fact(c)*fact(i-c));
			cout<<" ";
		}
		cout<<"\n";
	 }
	 getch();
}

long fact(int n)
{
	int c;
	long res=1;
	for(c=1; c<=n; c++)
	{
		res = res*c;
	}
	return (res);
}
