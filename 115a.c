#include<stdio.h>
int main()
{
    int l;
    int k,j;
    scanf("%d",&l);
    for(k=0;k<l;k++)
    {
        for(j=0;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
