#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
printf("Hello world!\n");
int n,i;
long num,den;
long double term;
long douhble res=0000000.00000000;
printf("Enter the number of terms to be included :");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    num=(long double) pow(-1,i);
    printf("\nNUMERATOR : %d",num);
    den=(long double) (2*i)+1;
    printf("\nDENOMINATOR : %d",den);
    term=(num/den) ;
    res=res+term;
    printf("\nRESULT : %lf",res);
}
printf("\nThe value of PI is : %lf",res);
printf("\nDone with the program.");
return 0;
}
