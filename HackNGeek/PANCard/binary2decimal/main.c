#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int input,result=0,cnt=1,digit;

    //printf("Enter any number any binary number: ");
    scanf("%ld",&input);

    while(input!=0){
        digit=input%10;
        result=result+digit*cnt;
        cnt=cnt*2;
        input=input/10;
    }
    return result;
}
