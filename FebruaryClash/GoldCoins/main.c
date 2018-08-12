#include <stdio.h>
#include <math.h>
int count_fourfactors_coprime(long int,long int);
int fourfactors(long int);
long int gcd(long int,long int);
int main()
{
	int T;
	int i,res;
	long int L,R;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%ld",&L);
		scanf("%ld",&R);
		res=count_fourfactors_coprime(L,R);
		printf("%d\n",res);
	}

    return 0;
}

int count_fourfactors_coprime(long int L,long int R)
{
	long int i;
	int count=0;
	for(i=L;i<=R;i++)
	{
		if(fourfactors(i))
			count++;
	}
	return count;
}

int fourfactors(long int x)
{
	long int sq=sqrt(x);
	long int i;
	int factor_count=2;
	if(x==2||x==3)
        return 0;
	for(i=2;i<=sq;i++)
	{
		if(x%i==0)
		  {
                if((i*i)==x)
                    factor_count++;
                else
                    {
                        if(gcd(i,(x/i))==1)
                            factor_count+=2;
                        else
                            factor_count+=3;
                    }
		  }
		  if(factor_count>4)
		  	return 0;
	}
	if(factor_count==4)
    {
        //printf("%ld ",x);
        return 1;
    }

    else
        return 0;
}


long int gcd(long int a, long int b)
{
    if (a<b) return gcd(b,a);
    if (a%b==0) return b;
    else return gcd(b, a%b);
}
