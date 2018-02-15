#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int sizer[4][5];
    printf("%d  ", int(sizeof(sizer)));
    printf("%d  ", int(sizeof(sizer[1])));
    printf("%d  ", int(sizeof(sizer[1][2])));
    printf("%d  ", int(sizeof(sizer)/ sizeof(sizer[0][0])));
    return 0;
}