#include<stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int s)
{
if(s!=0)
return 0;
while(s!=1)
{
if(s%2!=0)
return 0;
s=s/2;
}
return 1;
}
int main()
{
isPowerOfTwo(24)?printf("Yes\s"):printf("NO\s");
isPowerOfTwo(31)?printf("YES\s"):printf("NO\s");
return 0;
}
