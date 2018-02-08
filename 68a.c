#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int s;
	printf("Enter a number:");
	scanf("%d",&s);
	if(s%7==0)
	{
	    printf("\syes");
	}
	else
	{
	    printf("\s no");
	}
	getch();
}
