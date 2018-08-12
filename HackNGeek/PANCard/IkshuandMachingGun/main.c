#include <stdio.h>
#define MAX 100000
int main()
{
    int S,i,j;
    int L[MAX],R[MAX];
    scanf("%d",&S);
    for(i=0;i<S;i++)
    {
    	scanf("%d",&L[i]);
    	R[i]=L[i]-i;
    }
    for(j=0;j<S;j++)
    	printf("%d ",R[j]);
}
