#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    char array2[10][10];
    char array1[10][10];
    int rows = 4, columns = 4, i, j, count = 0;
    int condition1, condition2, condition3, condition4;
    for (int a = 0; a < rows; a++){
        for (int b = 0; b < columns; b++) {
            scanf("%c", &array1[a][b]);
            scanf("%c", &array2[a][b]);
        }
    }
    memcpy(array2, array1, sizeof(array1));
        do {
            for(i = 0; i < rows; i++) {
                for(j = 0; j < columns; j++) {
                    if((array1[i][j]) == '!') {
                        if(array1[(i+1)][j] == 'o') {
                            array2[(i+1)][j] = '!';
                            condition1 = 1;
                        }
                        else
                            condition1 = 0;
                        if(array1[(i-1)][j] == 'o') {
                            array2[(i-1)][j] = '!';
                            condition2 = 1;
                        }
                        else
                            condition2 = 0;
                        if(array1[i][(j+1)] == 'o') {
                            array2[i][(j+1)] = '!';
                            condition3 = 1;
                        }
                        else
                            condition3 = 0;
                        if(array1[i][(j-1)] == 'o') {
                            array2[i][(j-1)] = '!';
                            condition4 = 1;
                        }
                        else
                            condition4 = 0;
                    }
                }
            }
            memcpy(array1, array2, sizeof(array2));
            count++;
        }
        while(condition1 != 0 && condition2 != 0 && condition3 != 0 && condition4 != 0);

    return 0;
}