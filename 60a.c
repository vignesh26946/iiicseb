#include<stdio.h>
int main()
{
	int m=1,m1=1,b,c;
	scanf("%d",&b);
	printf("%d %d\t",m,m1);
	while(b>0)
	{
	  c=m+m1;
	  m=m1;
	  m1=c;
	  printf("%d\t",c);
	  b=b-2;
	}
  return 0;
}
