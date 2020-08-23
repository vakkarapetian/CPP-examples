/* C++ Program - List Files in Current Directory */
		
#include<iostream.h>
#include<conio.h>
#include<dirent.h>
void main()
{
	clrscr();
	DIR *dir;
	dirent *pdir;
	cout<<"Press any key to list and view all the files in the current directory : \n";
	getch();
	dir=opendir(".");
	while(readdir(dir))
	{
		pdir=readdir(dir);
		cout<<pdir->d_name<<"\t";
	}
	closedir(dir);
	getch();
}
