#include<stdio.h>
int main()
{
int n,num1,num2,v,i;
printf("enter the number");
scanf("%d%d",&num1,&num2);
printf("prime number between %d and %d is:", num1,num2);
while(num1<num2)
{
v=0;
for(i=2;i<=num1/2;i++)
{
if(num1 % i ==0)
{
v=1;
break;
}
}
if(v == 0)
printf("%d",num1);
num1 ++ ;
}
return 0 ;
}
