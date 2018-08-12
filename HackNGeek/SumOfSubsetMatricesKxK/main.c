#include <stdio.h>
#include <stdlib.h>
#define N 5
#define K 3

int main()
{
    int mat[N][N] = {{1, 1, 1, 1, 1},{2, 2, 2, 2, 2},{3, 3, 3, 3, 3},{4, 4, 4, 4, 4},{5, 5, 5, 5, 5},};
    int R=0;
    int C=0;
    int res[K][K]=  {{0,0,0},{0,0,0},{0,0,0},};
    while(R+K<N&&C+K<N)
    {
        int i,j;
        for (i=R;i<R+K;i++)
        {
            for (j=C;j<C+K;j++)
            {
                res[R][C]+= mat[i][j];
            }
        }
        printf("%d ",res[R][C]);
        R++;
        if(R+K==N)
        {
            R=0;
            C++;
        }
        return 0;
    }
}
