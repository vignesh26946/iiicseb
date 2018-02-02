#include <stdio.h>

void main(void) 
{
	
   int a,c,i;
   int a=2,b=1;
   scanf("%d",&a);
   printf("%d\t%d",a,b);
   for(i=2;i<a;i++)
   {
     c=a+b;
     a=b;
     b=c;
    printf("\t%d",c);
  
}
