#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x & 1 == 0)
        printf("EVEN");
    else
        printf("ODD");
    printf("Hello world!\n");
    return 0;
}
