  #include<stdio.h>
int main()
{
int a[50],b,c,s,count=0;
scanf("%d%d",&b,&c);
for(s=0;s<b;s++)
{
scanf("%d",&a[s]);
}
for(s=0;as<b;s++)
{
if(a[s]==c)
{
count++;
}
}
printf("%d time",count);
}
