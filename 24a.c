#include <stdio.h>
int main()
{
    int i, rev= 0,rem;
    printf("Enter an integer");
    scanf("%d",&i);
    while(i!= 0)
    {
        rem= i%10;
        rev= rev*10 + rem;
        i =i/10;
     }
    printf("rev= %d",rev);
    return 0;
}
