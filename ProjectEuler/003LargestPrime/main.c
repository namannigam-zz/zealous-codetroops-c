#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void primeFactors(long long int);
int main()
{
    long long int n = 600851475143;
    primeFactors(n);
    return 0;

}

void primeFactors(long long int n)
{
    int i;
    while(n%2 == 0)
    {
        n = n/2;
    }
    for(i=3; i<=n/2;i=i+2)
    {
        while (n%i==0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    if(n > 2)
        printf("%d",n);
}
