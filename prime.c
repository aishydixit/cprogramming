#include<stdio.h>
int main()
{
   int a, b, count, i, j;
 
   printf("Enter two numbers:");
   
   scanf("%d %d", &a, &b);
 // this is new work
   
   printf("Prime numbers from %d and %d are:\n",a, b);
   for(i=a+1; i<b; ++i)
   {
      count=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            count=1;
            break;
         }
      }
      if(count==0)
         printf("%d\n",i);
  }
  return 0;
}
