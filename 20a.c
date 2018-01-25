#include <stdio.h>
int main(void) 
{
	int v,i,sum=1;
	printf("enter the num");
	scanf("%d",&v);
	for(i=1;i<=v;i++)
	{
	sum=i*v;
	printf(" \t %d",sum);
	}
	return 0;
}
