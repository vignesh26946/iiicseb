#include<stdio.h>
void main()
{
int m,v,i;
printf("\nEnter the value");
scanf("%d",&m);
printf("\nEnter the value");
scanf("%d",&v);
printf("\nThe even numbers between %d to %d",m,v);
for(i=m;i<=v;i++)
{
if((i%2)==0)
{
printf("\v%d",i);
}
}
}
