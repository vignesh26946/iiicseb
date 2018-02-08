#include<stdio.h>
int main()
{
	int s,a,b;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	s=a*b;
	if(s%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
