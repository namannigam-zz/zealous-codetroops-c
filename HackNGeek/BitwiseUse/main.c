#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!I am trying to use Bitwise operators efficiently.\n");
    int x,y,bin=0;
    printf("\nEnter a decimal number : ");
    scanf("%d",&x);
    printf("\nSize of integer is %d byte.",sizeof(int));
    y=~x;
    printf("\nThe NOR value of %d is %d.\n",x,y);
    bin=binaryrep(int x);
    printf("\nThe binary representation is : %d.",bin);
    return 0;
}

int binaryrep(int a)
{
    int bin;
    int res=0,cnt=0;
    while(a)
    {
        bin=a%2;
        printf("%d",bin);
        res=res+(bin*(pow(10,cnt)));
        cnt++;
        a=a/2;
    }
    return res;
}
