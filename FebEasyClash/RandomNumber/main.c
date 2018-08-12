#include <stdio.h>
#define MAX 100000+1
#define MAX2 1000000000
int checkRandom(long int arr[],long int,long int,long int);
int main()
{
    int T;
    long int a,i,j,l,N,K,P;
    long int val[MAX];
    scanf("%d",&T);
    scanf("%ld %ld  %ld",&N,&K,&P);
    for(i=0;i<N;i++)
    	scanf("%ld",&val[i]);
    for (l=0;l<N;++l)
    {
        for (j=l+1;j<N;++j)
        {
            if (val[l] > val[j])
            {
                a =  val[l];
                val[l] = val[j];
                val[j] = a;
            }
        }
    }
    int res=checkRandom(val,N,K,P);
    if(res)
    	printf("YES");
    else
    	printf("NO");

	return 0;
}

int checkRandom(long int arr[MAX],long int N,long int K,long int P)
{
	long int min_X=arr[0]+P;
	long int max_X=arr[N-1]-P;
	long int count=0;
	for(int X=min_X;X<=max_X;X++)
	{
		for(int l=0;l<N;l++)
		{
			if((arr[l]>=(X-P))&&arr[l]<=(X+P))
				count ++;
			if(count>=K)
				return 0;
		}
	}
	return 1;
}
