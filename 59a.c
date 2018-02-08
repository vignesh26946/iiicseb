#include<stdio.h>
int main()
{
int a[10],k,j,temp;
for(k=0;k<10;k++)
scanf("%d",&a[i]);
for(k=0;k<10;k++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
temp=a[k];
a[k]=a[j];
a[j]=temp;
}
}
}
printf("the max number is %d",a[9]);
return 0;
}
