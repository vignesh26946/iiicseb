#include<stdio.h>
void main()
{
	int v,t,rem,rev=0;
	scanf("%d",&n);
	t=n;
	while(v!=0)
	{
		rem=v%10;
		rev=rev*10+rem;
		n=v/10;
	}
	if(rev==t)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
