#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int max_lenrec;
   int max_res;
   int ans;
   for(i=2;i<=1000;i++)
   {
       max_lenrec=count_recuring(i);
       if(max_lenrec>max_res)
       {
         max_res=max_lenrec;
         ans=i;
       }
   }
   printf("%d",ans);
    return 0;
}

int count_recuring(int n)
{
    int rem = 1;
    int i,j;
    for(i = 1; i <= n+1; i++)
         rem = (10*rem) % n;
    int d = rem;
    int count = 0;
    do {
      rem = (10*rem) % n;
      count++;
    } while(rem != d);
   return count;

}
