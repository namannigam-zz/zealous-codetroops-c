#include <stdio.h>
#include <stdlib.h>

int main()
{
int x = 10, y = 20;
if(!(!x) && x)
printf("x = %d\n", x);
else
printf("y = %d\n", y);
return 0;
}
