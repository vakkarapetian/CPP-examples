/* C++ Program - Add Two Numbers using Pointer */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num1, num2, *ptr1, *ptr2, sum=0;
	cout<<"Enter the two number :";
	cin>>num1>>num2;
	ptr1 = &num1;
	ptr2 = &num2;
	sum = *ptr1 + *ptr2;
	cout<<"Sum of the two number is "<<sum;
	getch();
}
