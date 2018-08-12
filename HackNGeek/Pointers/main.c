#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
    int *a[2];
    int i;
    int k =5,j=10;
    a[0]=&k;
    a[1]=&j;
    for(i=0;i<2;i++)
    {
        printf("%d is address of %d",a[i],*a[i]);
    }
    int *b[2];
    int m;
    int n[2] = {5,10};
    b[0]=&k;
    b[1]=&j;
    for(m=0;m<2;m++)
    {
        printf("%d is address of %d",b[i],*b[i]);
    }

}
