#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    char ch;
    while (ch=getch()!='\r')
    {
    cout << "The char " << ch << " has the ASCII code " << (int) ch << "\n";
    //printf("The char %c has the ASCII code %d.\n",ch,ch);
    }
    cout << "Hello world!" << endl;
    return 0;
}
