#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    while(count != 20)
    {
        char ch;
        switch(ch=getch())
        {
            case 'W' : case 'w' :
                printf("case");
                break;
            case 'S' : case 's' :
                printf("case");
                break;
            case 'A' : case 'a' :
                printf("case");
                break;
            case 'D' : case 'd' :
                printf("case");
                break;
            default :
                continue;
        }
        count++;
    }
        return 0;
}