#include <stdio.h>
#include <stdlib.h>
int IsPandigital(int,int);
int main()
{
 int x,y,sum=0;
 for(x=10;x<100;x++)
 {
     for(y=100;y<1000;y++)
     {
         if(IsPandigital(x,y))
            {sum+= (x*y);}
     }
 }
 printf("%d",sum);
return 0;
}

int IsPandigital(int x,int y)
{
    int a=x;
    int b=y;
    int prod=a*b;
    int digits[11];
    int cnt=1;
    int i,j,ret;
    while(a)
    {
        digits[cnt]=a%10;
        cnt++;
        a/=10;
    }
    while(b)
    {
        digits[cnt]=b%10;
        cnt++;
        b/=10;
    }
    while(prod)
    {
        digits[cnt]=prod%10;
        cnt++;
        prod/=10;
    }

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(digits[j]==i)
                ret=1;
             else
                ret=0;
        }
        if(!(ret))
          break;
    }
return ret;
}

/*Python One Liner :: print sum(set(map(lambda x:int(x[0:4]),filter(lambda x:sorted([i for i in x])==map(str,range(1,10)),[str(a*b)+str(a)+str(b) for a in range(1,2000) for b in range(1,100)]))))
*/
