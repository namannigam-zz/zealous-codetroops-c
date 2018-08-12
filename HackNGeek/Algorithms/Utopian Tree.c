#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int ht(int N)
{
    int hght=0;

    if(N==0)
        hght = 1;
    else
    {
     if(N%2==0)
          hght=(ht(N-1)+1);
     if(N%2==1)
         hght=(ht(N-1)*2);
    }
    return hght;
}
int main()
{
    int T,N;
    printf("Enter the number of test cases and the cycles for teach test case.");
    scanf("%d",&T);
    if(T>10 || T<1) exit(1);
    int i;
    for (i=1;i<=T;i++)
    {
        printf("Enter the number of cycles : ");
        scanf("%d",&N);
        if(N<1 || N >60) exit(1);
        int height = ht(N);
        printf("%d",height);
    }
}

