#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long int res=1;
    for(i=11;i<=20;i++)
        res*=i;
    printf("%ld",res);
}

int gcd(int a, int b)
{
    if (a<b) return gcd(b,a);
    if (a%b==0) return b;
    else return gcd(b, a%b);
}
