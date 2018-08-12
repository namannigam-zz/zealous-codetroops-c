#include <stdio.h>
long int count_den(int den[],int,long int);
int main()
{
    //printf("Hello World!\n");
    int den[10]={0,1,2,5,10,20,50,100,500,1000};
    int n=9; //total denominations
    //printf("%d",den[9]);
    int T;
    long int X,res;
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%d",&X);
    	res=count_den(den,n,X);
    	printf("%ld\n",res);
    }
    return 0;
}

long int count_den(int arr[],int n,long int val)
{
	long int count=0;
	int j;
	int max_curr=n;

	for(j=n;j>=1;j--)
	{
        if(val%(arr[j]))
        {
            max_curr=j;
            break;
        }
	}
	while(val>0)
		{
			count+=val/arr[max_curr];
			val=val%arr[max_curr];
			max_curr--;
		}
	return count;
}
