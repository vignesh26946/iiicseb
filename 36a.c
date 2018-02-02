#include<stdio.h>
#include<string.h>
void main()
{
char a[2000]="hello world.123";
int i,s=0;
for(i=0;a[i]!='\0';i++)
{
	if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='*'||a[i]=='@'||a[i]=='&')
	{
		c++;
	}
}
printf("%d",s);
}
