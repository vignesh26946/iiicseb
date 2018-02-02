#include <stdio.h>
int main()
{
	int a[10],temp,i,s;
	printf("Enter the  ten elements \n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	printf("%d \t",a[i]);
	}
	for(i=0;i<10;i++)
	{
	for(s=i+1;s<10;s++)
	{
	if(a[i]>a[s])
	{
	temp=a[i];
	a[i]=a[s];
	a[s]=temp;
	}
	}
	}
	for(i=0;i<10;i++)
	{
	if(a[i]>a[i+1])
	{
	printf(" \n %d maximum",a[i]);
	}
	}
	return 0;
}
