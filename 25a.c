#include <stdio.h>
int main(void) 
{
	int b[3],a,j,c;
	printf("\nEnter the elements");
	for(a=0;a<3;a++)
	{
	    scanf("%d",&b[a]);
	}
	for(a=0;a<3;a++)
	{
	 for(j=a+1;j<3;j++)
     {
    
	if(b[a]>b[j])
	{
		c=b[j];
		b[j]=b[a];
		b[a]=c;
	}
    }
	}
	printf("\nThe median element is:%d",b[1]);
	return 0;
}
