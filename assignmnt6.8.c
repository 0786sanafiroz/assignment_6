#include<stdio.h>
 int main()
 {
  int n,i;
  printf("enter a no.");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
   if(n%i==0)
      break;
  }
    if(i==n)
    {
        printf("%d is a prime no",n);
    }

    else
    {
        printf("%d  is not prime",n);
    }

    return 0;
    }
