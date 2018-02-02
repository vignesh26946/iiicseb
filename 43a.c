#include "stdio.h"
void main()
{
  char a[50],b[50],c[50];
  int i,s;
  printf("\nEnter the first string");
  gets(a);
  printf("\nEnter the second string");
  gets(b);
  for(i=0;a[i]!="";++i)
  {
    c[i]=a[i];
  }
  for(s=0;b[j]!="";++s)
  {
    c[i+s]=b[s];
  }
  c[i+s]="";
  printf("\n The concatenated sting is:%s",c);
} 
