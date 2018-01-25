#include<stdio.h>
#include<conio.h>
int main()
{
int base,power,a=1;
scanf("%d",&base);
scanf("%d",&power);
while(power!=0)
{
s=s*base;
power--;
}
printf("power of given number is%d",a);
return 0;
}
