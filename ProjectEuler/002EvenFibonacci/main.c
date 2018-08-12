#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum=0;
    int first=1;
    int second=1;
    int third=0;
    while(third<4000000)
    {
        third=first+second;
        first=second;
        second=third;
        if(third%2==0)
            {
                printf("%d\n",third);
                sum+=third;
            }
    }
    printf("%ld",sum);
    return 0;
}
