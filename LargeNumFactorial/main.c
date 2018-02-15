#include <stdio.h>
#include <stdlib.h>
#define MAX 500
int multiply(int,int [],int);
void factorial(int);
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        factorial(N);
    }
    return 0;
}

void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    int x,i;
    for (x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    //printf("Factorial of given number is \n");
    for (i=res_size-1; i>=0; i--)
        printf("%d",res[i]);
}

int multiply(int x, int res[], int res_size)
{
    int i,carry = 0;
    for (i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
