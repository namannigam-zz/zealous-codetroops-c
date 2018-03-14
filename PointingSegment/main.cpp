#include <iostream>
#include <malloc/malloc.h>
using namespace std;

int main() {

    const char* find = (char *) malloc(sizeof(char)*20);
    printf("Enter a word to find in the puzzle : \n");
    scanf("%s", find);
    printf("find says : I have got this saved under me %s \n", find); //just tried checking if it works
//    tolower(find); //this surely needs some ammendment
    int len = strlen(find) + 1;
    printf("%d : It WORKS",len);

    return 0;
}