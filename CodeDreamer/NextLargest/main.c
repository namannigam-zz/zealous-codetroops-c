#include <stdio.h>
#define MAX 1000
long int findnext(long int[],int,int,int);
int main()
{
    int N,l,r,q,nsrch;
    int i;
    long int res;
    long int arr[MAX];
    scanf("%d",&N);
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&q);
    for(i=0;i<N;i++)
    	scanf("%ld",&arr[i]);

   	while(q--)
   	{
   		scanf("%d",&nsrch);
   		res=findnext(arr,l,r,nsrch);
   		printf("%ld\n",res);

   	}
   return 0;
}

long int findnext(long int arr[MAX],int l,int r,int val)
{
	long int nextgreater=-1;
	int diff=100000;
	int i;
	for(i=l;i<=r;i++)
	{
		if(arr[i]>val)
			{
				if((arr[i]-val)<diff)
				{
					diff=arr[i]-val;
					nextgreater=arr[i];
				}

			}
	}
	return nextgreater;

}
