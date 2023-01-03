#include<stdio.h>
int main()
{
 int i,n,fact=1;
 printf("enter no.");
 scanf("%d",&n);
 for(i=n;i>0;i--)
 {
  fact=fact*i;
  }
  printf("%d is = %d",fact,i);

  return 0;
  }
