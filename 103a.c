#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,count;
int e,s=0;
clrscr();
printf("Enter the ending point:");
scanf("%d",&e);
for(i=0;i<=e;i++)
{
count=0;
for(k=1;j<=i;k++)
{
if((i%k)==0)
count++;
}
if(count==2)
s=s+i;
}
printf("\nThe sum is:%d",s);
getch();
}
