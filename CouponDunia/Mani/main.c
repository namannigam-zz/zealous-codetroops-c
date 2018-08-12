#include <stdio.h>
#include <stdlib.h>
int rec(int );
int main()
{
 int a, fact;
 printf("Enter a number:\n");
 scanf("%d",&a);
 fact = rec(a);

}
int rec(int x)
{
    printf("Raghav Arora lallu hai\n");
    int y=1;
    if (x==1)
    return(1);
    else
    y=x*rec(x-1);
}
