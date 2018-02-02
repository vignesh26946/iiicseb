#include<stdio.h>
int main()
{
int i,b;
scanf("%d%d",&i,&b);
i=i^b;
b=i^b;
a=i^b;
printf("i=%d",i);
printf("\nb=%d",b);
}
