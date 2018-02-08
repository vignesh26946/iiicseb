#include<stdio.h>
int main()
{
int s;
scanf("%d",&s);
if(s%2==0)
{
printf("%d",s);
}
else
{
s=--s;
printf("%d",s);
}
return 0;
}
