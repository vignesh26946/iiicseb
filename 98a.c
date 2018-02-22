#include<stdio.h>
void main()
{
    int a,r,s=0;
    printf("Enter the number");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        s=s*10+r;
        a/=10;
    }
    printf("The reverse of the given number is %d",s);
}
