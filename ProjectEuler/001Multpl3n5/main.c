#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum=0;
    /*int mul_three=3;
    int mul_five=3;
    int mul_fiftn=3;
    int i=2,j=2,k=2;*/
    int i;

    for(i=0;i<1000;i++)
    {
        if((i%3==0)||(i%5==0))
            sum+=i;
    }
    /*while(mul_three<1000)
    {
        sum+=mul_three;
        mul_three*=i;
        i++;
    }

    while(mul_five<1000)
        {
            sum+=mul_five;
            mul_five*=j;
            j++;
        }
    while(mul_fiftn<1000)
    {
        sum-=mul_fiftn;
        mul_fiftn*=k;
        k++;
    }*/

    printf("%ld",sum);

}
