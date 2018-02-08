#include<stdio.h>
int main()
{
	char s[100];
	int count=0,i;
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!='0' &&s[i]!='1')
		{
		count++;
		}
	}
	if(count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
