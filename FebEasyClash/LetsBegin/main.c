#include <stdio.h>
#include <math.h>
#define MAX 1000000
int countPrime(long int);
int prime(long int);
int main()
{
    int T,res;
    long int x;
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%ld",&x);
    	res=countPrime(x);
    	printf("%d\n",res);
    }
    return 0;
}
int countPrime(long int val)
{
	int cnt;
    long int seven_mod=val%7;
    switch (seven_mod)
    {
    case 0 :
     return val/7;
    case 1 :
    case 2 :
    case 3 :
    case 5 :
     	return val/7 + 1;
     	break;
    case 4 :
    case 6 :
    return ((val/7) +2);
    break;
    }

}
