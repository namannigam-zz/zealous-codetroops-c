#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,diff;
    int sumosqr=0;
    int sqrosum;
    for(i=1;i<=100;i++)
    {
        sumosqr+=(i*i);
    }

    sqrosum=(100*101)/2;
    sqrosum*=sqrosum;
    diff =sqrosum-sumosqr;
    printf("%d  ",sumosqr);
    printf("%d  ",sqrosum);
    printf("%d  ",diff);
}
