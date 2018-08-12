#include <stdio.h>
#include <stdlib.h>
int min_days(long long int);
int main()
{
    long long int T,N,i,j;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        j=min_days(N);
        printf("%d\n",j);
    }
/*N =1000000000;
   for(i=1;i<=100000;i++)
   {
       j=min_days(i);
    printf("%d\n",j);
   }*/

    return 0;
}

int min_days(long long int x)
{
    if(x==1)
        return 1;
    if(x==2)
        return 1;
    if(x==3)
        return 2;
    else
        return(1+ min_days(x/2));
}
