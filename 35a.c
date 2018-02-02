#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
char a[100];
gets(a);
int i,b,a=0,g=0,h=0,j=0;
b=strlen(a);
//printf("%d",b);
for(i=0;i<b;i++)
{
if(isalpha(a[i]))
{
a++;
}
else if(isspace(a[i]))
{
g++;
}
else if(ispunct(a[i]))
{
h++;
}
else
{
j++;
}
}
printf("numbers = %d",j);
return 0;
}
