#include <iostream>

using namespace std;

int main() {
    int i = 0;
    char message[10] = {10, 117, 117, 10, 10, 10, 10, 10, 90, 4};
    char xora[5];

    for(i=0; i<5;i++)
        xora[i] = (char)(message[i] ^ message[i+1509]);

    for(i=0; i<5;i++)
        printf("%c",xora[i]);

    return 0;
}