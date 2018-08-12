#include<stdio.h>
int main()
{
enum days {MON, TUE, WED=6, THU, FRI=-1, SAT};
printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
return 0;
}
