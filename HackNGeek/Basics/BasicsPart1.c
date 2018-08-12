#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int i=1;
    printf("Hello world!\n");
    int ax;
    int x=4.0/2;
    i=14;
    printf("The value of i should not change : %d\n",*&i);
    printf("See conversion : %d\n",x);
    printf("But its not implemented here : %d\n",(4.0/2));
    printf("To your surprise : %f\n",(4.0/2));
    printf("But its not implemented here : %d\n",(4.0+2));
    int y =-4.2/2;
    printf("The negative integer gives : %d\n",y);
  do
    {
        printf("Look : %d\n",i+=i);
    }
    while(i<=2);
    //looping();
    //switching();
    printing();
    return 0;

}
