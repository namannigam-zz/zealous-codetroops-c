#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <vector>

#define MAX_DIMENSION 4

using namespace std;

unsigned int puzzle_grid[MAX_DIMENSION][MAX_DIMENSION];

void print_grid();
void randomizer();

int myrandom (int i) { return rand()%i;}

int main()
{
    cout << "Hello world!" << endl;
    randomizer();
    print_grid();
    return 0;
}

void randomizer()
{
    //Using the random number generation
    int i,j;
    unsigned int arr_num[MAX_DIMENSION*MAX_DIMENSION]; //List of all numbers to shuffle
    vector <int> rand_vec;
    std::vector<int>::iterator it;
    for(i=0;i<(MAX_DIMENSION*MAX_DIMENSION)-1;i++)
        arr_num[i]=i+1;

    rand_vec.assign(arr_num,arr_num+((MAX_DIMENSION*MAX_DIMENSION)-1));


    int cnt=0;
    int indx=0;
    srand(time(NULL));

    random_shuffle(rand_vec.begin(),rand_vec.end(),myrandom);

    for (it=rand_vec.begin(); it!=rand_vec.end(); ++it)
        {
            arr_num[indx]= *it;
            indx++;
        }

    for(i=0;i<MAX_DIMENSION-1;i++)
        {
            for(j=0;j<MAX_DIMENSION;j++)
            {
                puzzle_grid[i][j]= arr_num[cnt];
                cnt++;
            }
        }

    for(j=0;j<MAX_DIMENSION-1;j++)
    {
        puzzle_grid[MAX_DIMENSION-1][j]= arr_num[cnt];
        cnt++;
    }

    puzzle_grid[MAX_DIMENSION-1][MAX_DIMENSION-1]=MAX_DIMENSION*MAX_DIMENSION;

}




void print_grid()
{
    int i,j;
    for(i=0;i<MAX_DIMENSION;i++)
        {
            for(j=0;j<MAX_DIMENSION;j++)
                {
                    if(puzzle_grid[i][j]==(MAX_DIMENSION*MAX_DIMENSION)) cout<<"   ";
                    else
                        if(puzzle_grid[i][j]<10) cout<<"0"<<puzzle_grid[i][j]<<" "; //Converting 1 digit number to 2 digit display
                        else cout<<puzzle_grid[i][j]<<" ";
                }
            cout<<"\n"; }
}
