#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int);
int main()
{
    int a,b,prime;
    int max_cons=0;
    int fin_a,fin_b;
    for(a=-999;a<1000;a++)
    {
        for(b=3;b<1000;b+=2)
        {
            if(isPrime(b))
               {
                    int n=0,count=0;
                    do
                    {
                        prime = isPrime(n*n+a*n+b);
                        n++;
                        count++;
                    }
                    while(prime);
                    count--;
                    if (count > max_cons)
                    {
                        fin_a=a;
                        fin_b=b;
                        max_cons=count;
                    }
                }
        }
    }
    printf("a=%d; b=%d; max_cons=%d; prod=%d",fin_a,fin_b,max_cons,fin_a*fin_b);
    return 0;
}
int isPrime(int x)
{
    int i;
    int range=sqrt(x);
    if(x==2)
    return 1;
    for(i=2;i<=range;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
