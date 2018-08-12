#include <stdio.h>
# define MAX 10000000
int main()
{
	long int arr[MAX];
	long int N,X;
	int Q;
	scanf("%ld",&N);
	long int i,j,l,m;
	for(i=0;i<N;i++)
	{
		scanf("%ld ",&arr[i]);
	}
	scanf("%d",&Q);
	for(j=0;j<Q;j++)
	{
		scanf("%ld",&X);
		for(l=0;l<N;l++)
		{
			if (arr[l]>X)
				arr[l]--;
		}
	}
	for(m=0;m<N;m++)
		printf("%ld",arr[m]);
    return 0;
}
