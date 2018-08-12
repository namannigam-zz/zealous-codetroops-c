#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  long int N;
  scanf("%ld",&N);
  long int i;
  long long int sum=0;
  for(i=2;i<N;i++)
    if(isPrime(i))
        sum+=i;
  printf("%lld",sum);
}

int isPrime(int x)
{
    long int i;
    long int range=sqrt(x);
    if(x==2)
    return 1;
    for(i=2;i<=range;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
