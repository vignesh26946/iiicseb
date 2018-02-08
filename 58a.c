#include<stdio.h>
int main()
{
int s,b,c;
printf("enter the number");
scanf("%d%d",&s,&b);
printf("the numbers are %d and %d\n",s,b);
c=s;
s=b;
b=c;
printf("the swap numbers are %d and %d\n",s,b);
return 0;
}
