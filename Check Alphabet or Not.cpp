/* C++ Program - Check Alphabet or Not */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<ch<<" is an alphabet";
	}
	else
	{
		cout<<ch<<" is not an alphabet";
	}
	getch();
}
