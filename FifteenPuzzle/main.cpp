#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <ctype.h>

#define ui unsigned int
#define MAX_DIMENSION 4 //Dimension of the grid could be an input from the user.

using namespace std;

ui puzzle_grid[MAX_DIMENSION][MAX_DIMENSION]={0};

//ui init_puzzle_grid[MAX_DIMENSION][MAX_DIMENSION]={0};    //Initial Grid
//ui finl_puzzle_grid[MAX_DIMENSION][MAX_DIMENSION]={0};    //Final Grid

//List of functions to be used during entire code
bool IsFinalState(ui[][MAX_DIMENSION]);
void SwapAdjacents(int,int,int,int);
bool ValidateMovements(int,int,int,int);
void movedown();
void moveup();
void moveright();
void moveleft();
void print_grid();
void instructions();
void randomizer();
void result_final_puzzle_grid();

int myrandom (int i) { return rand()%i;} //to generate random numbers effectively

/* Considering the grid as in a length of 16 numbers with 00,01,10,11 values. Effective use of bit fields here.
struct grid_square
{
    int x;
    int y;
}loc1,loc2; //loc2 should always be adjacent to loc1
*/

//Global variables
static int x1,y1,x2,y2;
static int mx=MAX_DIMENSION-1;
static int my=MAX_DIMENSION-1;

int main()
{
    instructions();//Instructions to play
    randomizer(); //Initial randomized grid for the game to start with
    print_grid(); //Starting point of the game

    int move_count=0;

    //Game in Progress
    while(!(IsFinalState(puzzle_grid)))
    {
        //Get the direction to move the blank space
        int ch;
        switch(ch=getch())
        {
            case 'W' : case 'w' :
                moveup();
                break;
            case 'S' : case 's' :
                movedown();
                break;
            case 'A' : case 'a' :
                moveleft();
                break;
            case 'D' : case 'd' :
                moveright();
                break;
            default :
                continue;
        }
        if(ValidateMovements(x1,y1,x2,y2))
            {
                cout<<"=====================================================================\n";
                SwapAdjacents(x1,y1,x2,y2);
                print_grid();
                move_count++;
            }
        else
            continue;
        cout<<"Move Count :"<<move_count<<"\n";
    }
    cout<<"Congratulations!\n";
    cout<<"Puzzle Solved In "<<move_count<<" Moves!\n";
    return 0;
}


/* Logic to check if the final output is reached.*/
bool IsFinalState(ui puzzle_grid[MAX_DIMENSION][MAX_DIMENSION])
{
    int i,j;
    bool flag=true;
    ui indx = 1;
    for(i=0;i<MAX_DIMENSION;i++)
        {
            for(j=0;j<MAX_DIMENSION;j++)
            {
                if(puzzle_grid[i][j]==(indx++)) //Verify the value at each block,continue to next if correct.
                    continue;
                else{flag=false;
                break;}
            }
            if(!(flag))
                break;
        }
    return flag;
}

/*Logic to swap two adjacent blocks.*/
void SwapAdjacents(int x1,int y1,int x2,int y2)
{
    ui temp;
    temp=puzzle_grid[x1][y1];
    puzzle_grid[x1][y1]=puzzle_grid[x2][y2];
    puzzle_grid[x2][y2]=temp;
}


/*Print the grid at any step of the game.*/
void print_grid()
{
    int i,j;
    for(i=0;i<MAX_DIMENSION;i++)
        {
            cout<<"                           ";
            for(j=0;j<MAX_DIMENSION;j++)
                {
                    if(puzzle_grid[i][j]<10) cout<<"0"<<puzzle_grid[i][j]<<" "; //Converting 1 digit number to 2 digit display.
                    else if(puzzle_grid[i][j]==(MAX_DIMENSION*MAX_DIMENSION)) cout<<"   ";
                    else cout<<puzzle_grid[i][j]<<" ";
                }
            cout<<"\n"; }
}

/*The final or resultant state of the grid.*/
void result_final_puzzle_grid()
{
    ui val=1;
    int i,j;
    for(i=0;i<MAX_DIMENSION;i++)
        for(j=0;j<MAX_DIMENSION;j++)
            puzzle_grid[i][j]=(val++);
}

/*Validating the movement of cells in the grid.*/
bool ValidateMovements(int x1,int y1,int x2,int y2)
{
    bool flag=true;
    //Upper and lower bounds required for manual input of the cell coordinates
    if(x1<0||x2<0||x1>MAX_DIMENSION-1||x2>MAX_DIMENSION-1)
        {cout<<"Invalid Move.1\n";flag=false;}
    //Upper and lower bounds required for manual input of the cell coordinates
    if(y1<0||y2<0||y1>MAX_DIMENSION-1||y2>MAX_DIMENSION-1)
        {cout<<"Invalid Move.2\n";flag=false;}
    //Cells not adjacent in the grid
    if((abs(x1-x2)>1)||(abs(y1-y2)>1))
        {cout<<"Invalid Move.3\n";flag=false;}
    //Coordinates of the same cell during manual input
    if((x1==x2)&&(y1==y2))
        {cout<<"Invalid Move.4\n";flag=false;}
    //Diagonally adjacent elements not to be swapped
    if((abs(x1-x2)==1)&&(abs(y1-y2)==1))
        {cout<<"Invalid Move.5\n";flag=false;}
    //Real scenario of swapping with the only blank grid.
    if((puzzle_grid[x1][y1]!=(MAX_DIMENSION*MAX_DIMENSION))&&(puzzle_grid[x2][y2]!=(MAX_DIMENSION*MAX_DIMENSION)))
        {cout<<"Invalid Move.6\n";flag=false;}

    return flag;
}

void movedown()
{
//change the coordinates of val=16 to i+1,j
x1=mx; y1=my;
x2=mx+1; y2=my;
//update the location of val=16
if(x2<=MAX_DIMENSION-1)
    {mx=x2; my=y2;}

}
void moveup()
{
//change the coordinates of val=16 to i-1,j
x1=mx; y1=my;
x2=mx-1; y2=my;
//update the location of val=16
if(x2>=0)
    {mx=x2; my=y2;}
}

void moveleft()
{
//change the coordinates of val=16 to i,j-1
x1=mx; y1=my;
x2=mx; y2=my-1;
//update the location of val=16
if(y2>=0)
    {mx=x2; my=y2;}
}

void moveright()
{
//change the coordinates of val=16 to i,j+1
x1=mx; y1=my;
x2=mx; y2=my+1;
//update the location of val=16
if(y2<=MAX_DIMENSION-1)
    {mx=x2; my=y2;}
}

void instructions()
{
    cout<<"===========================Instructions==============================\n";
    cout<<"Press the A-D-W-S keys to move the blank space in required direction.\n";
    cout<<"           Key press makes you move the numbers in the grid.         \n";
    cout<<"Continue moving and attain sequential grid with least moves possible.\n";
    cout<<"=====================================================================\n";
}

//Function used to randomize the grid initially
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

/* Challenges Faced
1. While swapping the elements,other elements in the matrix gets modified. (Use of improper structure)
2. Restricting the movement of the cells. (Swapping the adjacent with coordinates defined)
3. Initializing the values of the cell does not have a way to figure it out from the index 1. (Index from 1 to (MAX_DIMENSION*MAX_DIMENSION)-1)
4. Randomizing the cell values initially for the puzzle. (Using rand function based on time,shuffling the array values)
5. Blank Grid is considered to be the grid with value 16 and would be invisible. (Added check for the MAX*MAX value while display. Abstract)
6. Swapping the values on arrow key pressed,detection of the movement direction.
7. Do not accept any other key input.
*/
