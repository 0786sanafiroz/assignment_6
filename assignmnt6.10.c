#include<stdio.h>
int main()
{
  int rem,rev,n;
  printf("enter a no.");
  scanf("%d",&n);
  while(n!=0)
  {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
   }
   printf("reverse no. is %d",rev);
   return 0;
   }
