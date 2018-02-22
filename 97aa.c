#include <stdio.h>

int main()
{int r,num=0;
 long int s;
    scanf("%d",&s);
    while(s!=0)
    {
        r=s%10;
        num=num*10+r;
        s=s/10;
    }
    printf("%d",num);

return 0;
