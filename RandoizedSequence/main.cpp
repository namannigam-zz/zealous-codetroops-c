#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DIMENSION 4

using namespace std;

unsigned int puzzle_grid[MAX_DIMENSION][MAX_DIMENSION];

void print_grid();
void randomizer();

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
    unsigned int arr_num[MAX_DIMENSION*MAX_DIMENSION]; //list of all numbers to shuffle
    //http://www.cplusplus.com/reference/algorithm/random_shuffle/
    //http://www.cplusplus.com/reference/algorithm/shuffle/
    //http://www.cplusplus.com/forum/beginner/98214/

    srand(time(NULL));
    for(i)
    for(i=0;i<MAX_DIMENSION-1;i++)
        {
            for(j=0;j<MAX_DIMENSION;j++)
            {
                puzzle_grid[i][j]= (rand()%15)+1;

            }
        }
    for(j=0;j<MAX_DIMENSION-1;j++)
    {
        puzzle_grid[MAX_DIMENSION-1][j]=(rand()%15)+1;
    }

    puzzle_grid[MAX_DIMENSION-1][MAX_DIMENSION-1]=MAX_DIMENSION*MAX_DIMENSION;
}

void print_grid()
{
    int i,j;
    for(i=0;i<MAX_DIMENSION;i++)
        {   for(j=0;j<MAX_DIMENSION;j++)
                {
                    if(puzzle_grid[i][j]<10) cout<<"0"<<puzzle_grid[i][j]<<" "; //Converting 1 digit number to 2 digit display.
                    else if(puzzle_grid[i][j]==(MAX_DIMENSION*MAX_DIMENSION)) cout<<"   ";
                    else cout<<puzzle_grid[i][j]<<" ";
                }
            cout<<"\n"; }
}
