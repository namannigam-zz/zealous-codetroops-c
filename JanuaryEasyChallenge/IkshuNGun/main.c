#include <stdio.h>
#define MAX 100000
void bubblesort(int[],int);

int main()
{
    int i,j,S;
    int L[MAX],R[MAX];
    scanf("%d",&S);
    for(i=0;i<S;i++)
    {
    	scanf("%d",&L[i]);
    }
    bubblesort(L,S);
    for(j=0;j<S;j++)
    {
        R[j]=L[j]-j;
    	printf("%d ",R[j]);
    	if(j!=S-1)
			printf(" ");
		else
			printf("\n");
    }
}

void bubblesort(int L[],int S)
{
    int k,l,a;
    for(k=0;k<S;++k)
    {
        for(l=k+1;l<k;++l)
        {
            if(L[k]>L[l])
            {
                a=L[k];
                L[k]=L[l];
                L[l]=a;
            }
        }
    }
}
