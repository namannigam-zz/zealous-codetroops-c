#include <stdio.h>
#include <stdlib.h>
int noc(int[],int);
int main()
{
    int tc,n,j,res;
    int arr[1002];
    scanf("%d",&tc);
    while(tc--)
    {
    	scanf("%d",&n);
    	for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
        res=noc(arr,n);
        printf("%d",res);
    }
    return 0;
}

int noc(int arr[1002],int len)
{
    int count=0;
    int i,j;
    for(i=len-1;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
                count++;
        }
    }
    return count;
}
