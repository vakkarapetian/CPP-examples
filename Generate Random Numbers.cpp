/* C++ Program - Generate Random Numbers */
		
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int i;
	for(i=0; i<100; i++)
	{
		cout<<rand()<<"\t";
	}
	getch();
}
