/* C++ Program - Check Vowel or Not */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	cout<<"Enter an alphabet : ";
	cin>>ch;
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' ||
	ch=='i' || ch=='I' || ch=='o' || ch=='O' ||
	ch=='u' || ch=='U')
	{
		cout<<"This is a vowel";
	}
	else
	{
		cout<<"This is not a vowel";
	}
	getch();
}
