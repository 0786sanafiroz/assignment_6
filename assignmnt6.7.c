#include<stdio.h>
 int main()
 {
  int n,count=0;
  printf("enter the no.");
  scanf("%d",&n);
  while(n>0)
  {
     n= n/10;
     count++;
  }
   printf("total no. is %d",count);
    return 0;
    }
