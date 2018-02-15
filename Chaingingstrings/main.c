#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORDLEN 20
#define WORDCNT 20

int main()
{
    printf("Hello world!\n");
    char arr[WORDCNT][WORDLEN];
    int j,strcount;
    printf("Enter the number of strings to be entered:");
    scanf("%d",&strcount);
    for(j=0;j<=strcount;j++)
        gets(arr[j]);
    if(ChainingStrings(arr,strcount))
        printf("The words are chaining.");
    return 0;
}
