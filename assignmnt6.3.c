#include<stdio.h>
int main()
{
 int i,n,sum=0;
 printf("enter the no.");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
  if(i%2!=0)
    sum=sum+i;
  printf(" %d\n ",sum);
  return 0;
  }
