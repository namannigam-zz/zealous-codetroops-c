#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
int main()
{
    long int in;
    int max=0;
    int start=0;
    for(in=MAX;in>=1;in--)
    {
        int count=0;
        int strt=in;
        while(strt>1)
        {
            count++;
            if(strt%2==0)
                strt/=2;
            else
                strt= (3*strt) + 1;
        }
        if(count>max)
        {
         max=count;
         start=in;
        }

    }
    printf("%d ",max);
    printf("%d ",start);

}
