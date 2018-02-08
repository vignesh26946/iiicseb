#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int s,i,count=0;
	printf("Enter a number:");
	scanf("%d",&s);
	for(i=1;i<s;i++)
	{
		if(s%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("This is a prime number");
	}
	else
	{
		printf("This is not a prime number");
	}
	getch();
}
