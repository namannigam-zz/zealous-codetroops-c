#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x,y,max_xy,min_xy;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("x = %d -- y = %d\n",x,y);

    if(x & 1 == 0)
        printf("x is divisible by 2");


    max_xy = x ^ ((x ^ y) & -(x < y));    //Returns Maximum
    min_xy = y ^ ((x ^ y) & -(x < y));    //Returns Minimum

    printf("Max = %d\n",max_xy);
    printf("Min = %d\n",min_xy);


    // swapping on liner
    x ^= y;
    y ^= x;
    x ^= y;
    printf("x = %d -- y = %d\n",x,y);

    //greatest common divisor
    int grtcmndvsr=gcd(x,y);
    printf("GCD = %d\n",grtcmndvsr);

    //Check if a number is divisible by 2 or not
    if(x & 1 == 0)
        printf("x is divisible by 2");
    else
        printf("x is not divisible by 2");

    return 0;
}


 int gcd(int a,int b)
 {
 while(b^=a^=b^=a%=b);
 return a;
 }
