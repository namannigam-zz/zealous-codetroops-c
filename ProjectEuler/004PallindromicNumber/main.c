#include <stdio.h>
#include <stdlib.h>
int isPallindromic(long int);
int main()
{
  int i,j;
  long int prod;
  for(i=999;i>99;i--)
  {
      for(j=999;j>99;j--)
      {
          prod=i*j;
          if(isPallindromic(prod))
                printf("%ld",prod);
      }
  }
}
int isPallindromic(long int x)
{
    int arr[10];
    int cnt=0;
    int j;
    long int num=0;
    int pv=1;

     while(x)
     {
         arr[cnt]=x%10;
         x=x/10;
         cnt++;
     }
     for(j=cnt-1;j>=0;j--)
     {
         num=num+(arr[j]*pv);
         pv=pv*10;
     }
     if(num==x)
        return 1;
     else
        return 0;

 }

