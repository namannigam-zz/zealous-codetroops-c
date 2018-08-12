#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 10
#define MAX_VAL 9999

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,res=1,i,j;
    char str[MAX_VAL][MAX];
    scanf("%d",&T);
    for(j=0;j<T;j++)
        {
        scanf("%s",str[i]);
        for(i=0;i<10;i++)
        {
            char ch=str[j][i];
            if((i<=4) || (i==9))
                  {
                      if((printf("%d",ch)>=65) && ((printf("%d",ch)<=90)))
                      {res=1;}
               else {

                   res=0;
                    break;
               }
                  }
            else
                  {
                      if((printf("%d",ch)>=48 )&& (printf("%d",ch)<=57))
                      {res=1; }
                else {res =0;break;}
                  }
        }
        if(res)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

