#include<stdio.h>
int main()
{
  int a,m,c;
  printf("enter the for a and m:");
  scanf("%d%d",&a,&m);
  c=a+m;
  printf("%d",c);
  if(c%2==0)
  printf("\a it is even");
  else
  printf("\a it is odd");
}
