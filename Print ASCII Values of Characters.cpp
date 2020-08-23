/* C++ Program - Print ASCII Values of Characters */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	int i;
	for(i=1; i<255; i++)
	{
		ch=i;
		cout<<i<<"-> "<<ch<<"\t";
	}
	getch();
}
