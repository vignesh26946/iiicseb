#include <stdio.h>
int main()
{
    int a,b,c,gcd;
    printf("Enter two integer Values \n");
    scanf("%d%d",&a,&b);
    for(c = 1; c<=a && c <=b; c++)
    {
        if(a % i == 0 && b % c == 0)
            gcd = c;
    }
    printf("gcd of %d and %d is = %d", a,b,gcd);
    return 0;
}
