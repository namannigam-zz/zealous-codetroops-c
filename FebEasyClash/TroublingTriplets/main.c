#include <stdio.h>
#define MAX 1000000+1
int counttriplets(int val[],int,int);
int main()
{
    int N,K,res,i;
    long int val[MAX];
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    	scanf("%d",&val[i]);
    res=counttriplets(val,N,K);
    printf("%d",res);
    return 0;
}

int counttriplets(int *val,int N,int K)
{
	int i,j,k,count=0;
	for(i=0;i<N-2;i++)
	{
		for(j=i+1;j<N-1;j++)
		{
			for(k=j+1;k<N;k++)
			{
				if((val[i] * val[j] * val[k]) <=K)
					count++;
			}
		}
	}
	return count;
}
