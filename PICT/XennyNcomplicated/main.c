#include <stdio.h>
#define MAX 1000005
int sum_range(int[],int,int);
static int arr[MAX];
int main()
{
    int N,Q,i,j,k;
    int elem_ins,elem_del,size,l,r,a;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    	scanf("%d",&arr[i]);
    scanf("%d",&Q);
    size=N;
    for(j=1;j<=Q;j++)
    {
    	scanf("%d",&a);
    	switch(a)
    	{
    	case 0:
	    	scanf("%d",&l);
	    	scanf("%d",&r);
	    	int ans=0;
	    	for(k=l;k<=r;k++)
                ans=ans+arr[k];
	    	printf("%d\n",ans);
	    	break;

    	case 1:
	    	scanf("%d",&elem_del);
	    	int c;
            for(c=1;c<=size;c++)
                {
                if(arr[c]==elem_del)
                {arr[c]=0;break;}
                }
	    	break;

	    case 2:
	    	scanf("%d",&elem_ins);
	    	size++;
	    	arr[size]=elem_ins;
	    	break;
    	}
    }
    return 0;
}
