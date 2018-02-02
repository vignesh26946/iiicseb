#include <stdio.h>
int main()
{
    int k[10],k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<k;i++)
    {
    printf("%d\t%d\n",k[i],i);
    }
    return 0;
}
