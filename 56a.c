#include<stdio.h>
void main()
{
char str={"boopathi10"};

int a,flag ;
for(a=o;a!=0;a++)
{
if(((str[a]>='a')||(str[a]<='z'))&&((str[a]>=0)||(str[a]<=9)))
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==0)
{
printf("yes");
}
else
{
printf("no");
}
}
