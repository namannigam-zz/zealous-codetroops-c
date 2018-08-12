#include <stdio.h>
#include <stdlib.h>
#define MAX 9

int main()
{
    int i,j,k,ln=0;
    for(i=MAX;i>0;i=i-2)
    {
        for(k=0;k<ln;k++)
            printf(" ");
        for(j=i;j>0;j--)
            printf("*");
        for(k=0;k<ln;k++)
            printf(" ");
        printf("\n");
        ln++;
    }
    return 0;
}
