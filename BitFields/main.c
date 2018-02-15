#include <stdio.h>
#include <stdlib.h>
struct test1
{
    unsigned int x;
    /*unsigned int y: 33;*/
    unsigned int z;
};
struct test2
{
    unsigned int x;
    /*long int y: 33;*/
    unsigned int z;
};
union test
{
    unsigned int x: 3;
    unsigned int y: 3;
    int z;
};

int main()
{
    printf("%d", sizeof(struct test1));
    struct test2 t1;
    unsigned int *ptr1 = &t1.x;
    unsigned int *ptr2 = &t1.z;
    printf("%d", ptr2 - ptr1);
    printf("%d", sizeof(struct test2));
    union test t;
    t.x = 5;
    t.y = 4;
    t.z = 1;
    printf("t.x = %d, t.y = %d, t.z = %d",t.x, t.y, t.z);
    return 0;
}
