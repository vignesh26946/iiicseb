#include<stdio.h>
int main()
{
	char k[1000];
	int i,count1=0;
	printf("enter the string\n");
	scanf("%[^\n]s",&k);
	for(i=0;k[i]!='\0';i++)
	{
		if(k[i]==' ')
		{
			count1++;
		}
	}
	printf("%d",count1+1);

	return 0;
}
