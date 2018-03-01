#include<stdio.h>
#include<conio.h>
void main()
{
int s;
clrscr();
printf("Enter s:");
scanf("%d",&s);
if(s&1)
{
printf("\nODD");
}
else
{
printf("\nEVEN");
}
getch();
}
