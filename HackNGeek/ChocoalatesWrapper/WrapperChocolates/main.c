#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,m,n,c,answer=0;
    int choc;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&c,&m);
        choc=n/c;
        answer=answer+choc;
        while(choc>=m)
        {
        answer=answer+(choc/m);
        printf("Then Answer = %d\n",answer);
        choc=(choc/m)+(choc%m);
        }
        printf("Final = %d\n",answer);
    }
    return 0;

}
