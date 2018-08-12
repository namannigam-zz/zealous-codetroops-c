#include <stdio.h>
#include <stdlib.h>
Rsum(int);
Factorial(int);
int main()
{
    long int a,b;
    long int T;
    int fact,x,i;
    scanf("%d",&T);
    while(T)
    {
        int res=0;
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(i<6)
            {
                fact=Factorial(i);
                x=Rsum(fact);
            }
            else
                x=9;
            res+=x;
        }
        printf("%d\n",res);
    }

    return 0;
}
int Rsum(int num)
{
    int val=0;
    while(num)
    {
        val+=(num%10);
        num=num/10;
    }
    if(val/10)
        val = Rsum(val);
    return val;
}
int Factorial(int f)
{
    int x=1;
    if(f==0)
        return 1;
    if(f>0)
    {
        x=f*Factorial(f-1);
    }
    return x;
}
