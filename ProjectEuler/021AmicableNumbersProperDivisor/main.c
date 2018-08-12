#include <stdio.h>
#include <stdlib.h>

int prop_div(int);

int main()
{
    int N,d,i;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        d=prop_div(i);
        printf("=%d\n",d);
    }
    getch();
}

int prop_div(int N)
{
   int* arr = malloc(sizeof(int) * (N/2));
   int i,cnt=0,sum_div=0;
    if(N==1)
        sum_div=1;
    else
    {
    for(i=1;i<=N/2;i++)
    {
        if(N%i==0)
            {
                arr[cnt]=i;
                printf("%d+",i);
                sum_div+=i;
                cnt++;
                }
    }
    }
return sum_div;
}
