/* C++ Program - Check Even or Odd */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num;
	cout<<"Enter a number :";
	cin>>num;
	if(num%2==0)
	{
		cout<<"This is an even number";
	}
	else
	{
		cout<<"This is an odd number";
	}
	getch();
}