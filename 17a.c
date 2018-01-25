#include<stdio.h>
void main()
{
	int n,s,r,rem;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		r=r+rem*rem*rem;
		n=n/10;
	}
	if(s==r)
	{
		printf("yes armstrong");
	}
	else
	{
		printf("no,not armstrong");
	}
}
© 2018 GitHub, Inc.
