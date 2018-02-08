#include <stdio.h>
int main()
{
    int s = 34;
    int k = 89;
    printf(" value of s=%d k=%d before swapping\n", s, k);
    s = s ^ k;
    k = s ^ k;
    i = s ^ k;
    printf("value of s=%d k=%d after swapping", s, k);
    return 0;
}
