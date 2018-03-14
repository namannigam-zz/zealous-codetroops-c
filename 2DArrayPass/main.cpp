#include <iostream>

using namespace std;
const int MTRX_MAX = 3;

void Get_Matrix(); //Ask the user for input

int** Add_Matrix(int [][MTRX_MAX], int [][MTRX_MAX]); //Calculates the sum of the matrecies

void Print_Matrix(int [][MTRX_MAX]); //Printout the inputed data

int main()
{
    int matrix1[MTRX_MAX][MTRX_MAX];
    int matrix2[MTRX_MAX][MTRX_MAX];
    Get_Matrix();
    int** sum = Add_Matrix(matrix1, matrix2);
    Print_Matrix(sum);


    return 0;
}

//Function Definetions
void Get_Matrix()
{
int matrix1[3][3] = { 0 };
int matrix2[3][3] = { 0 };

cout << "Enter the first Matrix: \n";
for (int i = 0; i < MTRX_MAX; i++)
    for (int j = 0; j < MTRX_MAX; j++)
         cin >> matrix1[i][j];
cout << "Enter the second Matrix: \n";
for (int i = 0; i < MTRX_MAX; i++)
    for (int j = 0; j < MTRX_MAX; j++)
        cin >> matrix2[i][j];

}

int** Add_Matrix(int matrix1[][MTRX_MAX], int matrix2[][MTRX_MAX]) {
    int** sum = 0;
    for (int i = 0; i < 3; i++) {
        sum[i] = new int[MTRX_MAX];
        for (int j = 0; j < 3; j++)
            sum[i][i] = matrix1[i][j] + matrix2[i][j];
    }
    return sum;
}

void Print_Matrix(int matrix1[][MTRX_MAX], int matrix2[][MTRX_MAX], int sum[][MTRX_MAX]){
    for (int i = 0; i < MTRX_MAX; i++) {
        for (int j = 0; j < MTRX_MAX; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}