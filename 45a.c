#include<stdio.h>
int main() 
{
  int s,count=0;
  printf("enter the number");
  scanf("%d",&s);
  while(s!=0)
  {
    s=s/10;
    ++count;
  }
  printf("the number of digit is%d",count);
  
  return 0;
}
