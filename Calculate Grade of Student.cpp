/* C++ Program - Calculate Grade of Student */
		
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark[5], i;
	float sum=0,avg;
	cout<<"Enter marks obtained in 5 subjects :";
	for(i=0; i<5; i++)
	{
		cin>>mark[i];
		sum=sum+mark[i];
	}
	avg=sum/5;
	cout<<"Your Grade is ";
	if(avg>80)
	{
		cout<<"A";
	}
	else if(avg>60 && avg<=80)
	{
		cout<<"B";
	}
	else if(avg>40 && avg<=60)
	{
		cout<<"C";
	}
	else
	{
		cout<<"D";
	}
	getch();
}
