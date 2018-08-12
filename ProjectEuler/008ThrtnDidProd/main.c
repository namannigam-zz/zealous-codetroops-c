#include <stdio.h>
#define MAX 1000

int main(void)
{
    int i,j,arr[MAX];
    long int max_prod=1;

    for(i=0;i<1000;i++)
    {
        scanf("%d",&arr[i]);
    }
    int index=0;

    while(index<MAX)
    {
        long int prod=1;

        for(j=index;j<(index+13);j++)
        {
            if(arr[j])
            {
                prod=prod*arr[j];;
            }
            else
            {
                index=j;
                break;
            }
        }

        if(prod>=max_prod)
        {
            max_prod=prod;
        }

        index=index+1;
    }

    printf("%ld",max_prod);

    return 0;
}



