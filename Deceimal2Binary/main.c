#include<stdio.h>
int main()
{
       //Enter your code here.Read input from STDIN.Print output to STDOUT/
       int bin,dec=0,rem,j=1;
       scanf("%d",&bin);
       while(bin!=0)
       {
               rem=bin%10;
               if(rem>1)
               {
                       printf("Invalid Binary Number");
                       return 0;
               }
                dec=dec+rem*j;
                j=j*2;
                bin=bin/10;
       }
       return 0;
}
