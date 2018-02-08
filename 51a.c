#include<stdio.h>
int main()
{
	int s,num,sum=0;
	int i,rem;
	printf("enter the num\n");
	scanf("%d",&num);
	i=num;
	while(num>0)
	{
		s=num%10;
		num=num/10;
		sum=(sum*10)+s;
	}
	while(sum>0)
	{
	  rem=sum%10;
	  sum=sum/10;
	  printf("%d\t",rem);
	}
	return 0;
}
