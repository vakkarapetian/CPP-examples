/* C++ Program - Check Palindrome or Not */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, rem, orig, rev=0;
	cout<<"Enter a number : ";
	cin>>num;
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	if(rev==orig)  // check if original number is equal to its reverse
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	getch();
}
