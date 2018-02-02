#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char a[10];
printf("string");
gets(a);
int i,n,count=0;
n=strlen(s);

for(i=0;i<=n;i++)
{
if(isspace(a[i]))
{
count++;
}
}
printf("%d",count);
return 0;
}
