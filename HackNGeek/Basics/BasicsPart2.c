#include<stdlib.h>
int looping()
{
    int x;
    for(scanf("\n%d",&x);x<24;x++)
        printf("Hell!");
    return 0;
}
int switching()
{
    char ch;
    printf("Continue ? Y/N\n");
    scanf("\n%c",ch);
    switch(ch)
    {
       //This code section returns run-time Error in CB.
        case 'y' :
        case 'Y' : printf("Continue...");
                   break;
        printf("This statement does not belong to any of the cases.");
        case 'n' :
        case 'N' : exit;
                   break;
        case 'Y'+'N' : printf("The expression Constant");
        default : printf("Default");
                  break;
    }
    return 0;
}

int goingto()
{

    return 0;
label : printf("This is a label used via GOTO statement.");
}
