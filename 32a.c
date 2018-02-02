#include <stdio.h>
#include<string.h>
int main()
{
char str[200];
int count=0,a;
printf("enter the string:");
gets(str);
for(a=0;str[a]!=0;a++)
{
if(str[a] == ' ')
count++;
}
printf("%d",count);
return 0;
}
