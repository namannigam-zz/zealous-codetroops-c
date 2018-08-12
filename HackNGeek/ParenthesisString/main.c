#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
int i,opencount=0,closecount=0;
char str[MAX];
gets(str);
char open[MAX/2];
char close[MAX/2];
if(strlen(str)%2==1)
    return -1;
for(i=0;i<strlen(str);i++)
{
    if(str[i]=='(')
        opencount++;
    else
        closecount++;

}
printf("Open braces : %d",opencount);
printf("Close braces : %d",closecount);
if(opencount!=closecount)
    return -1;
return 0;
}
