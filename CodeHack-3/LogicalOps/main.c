#include <stdio.h>
#define MAX 1000000
long int and_op(long int[MAX],int);
int main()
{
    int T,K;
    int i;
    long int res;
    long int arr[MAX];
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%d",&K);
    	for(i=0;i<K;i++)
    		scanf("%ld",&arr[i]);
    	res=and_op(arr,K);
    	printf("%ld\n",res);
    }
    return 0;
}

long int and_op(long int *arr,int n)
{
	long int val=1;
	int j,l;
	for(j=0;j<n;j++)
	{
		for(l=0;l<n;l++)
			{
				if(l!=j)
				 val=val&arr[l];
			}
		if(val==arr[j])
			return val;
	}
	return -1;
}
