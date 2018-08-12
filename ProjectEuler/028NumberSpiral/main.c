#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum=1;
    /*Adding 4 members for every spiral loop with increment increasing by 2 every spiral loop*/
    int loop_mem;
    long int mem_in_loop=1;
    long int increment=2;
    long int max_element=1001*1001;
    while(mem_in_loop<max_element)
    {
        for(loop_mem=0;loop_mem<4;loop_mem++)
        {
            mem_in_loop+=increment; printf("%d ",mem_in_loop);
            sum=sum+mem_in_loop; printf("%d is sum\n",sum);
        }
        increment+=2;

     }
     printf("%d",sum);
    return 0;
}
