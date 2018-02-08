#include "stdio.h"

int main(void) {
 int s,a=1,i;
 scanf("%d",&s);
 if(s<=1000)
 {
 for(i=0;i<s;i++)
 {
   a=a*2;
   if(a==s)
   {
     printf("%d",s*2);
     break;
   }
 }
 }
 
  return 0;
}
