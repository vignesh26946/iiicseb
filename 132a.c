#include <stdio.h>
#include<string.h>
int main()
{
  char a[20],b,i;
  printf("Enter the string");
  scanf("%s",a);
  b=strlen(a);
  for(i=b-1;i>=0;i--)
  {
      if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
      printf("%c",a[i]);
  }
}

