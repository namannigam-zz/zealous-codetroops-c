/*#define K 3
#define N 5

void alternate(int mat[][N],int k)
{
    int R=0;
    int C=0;
    int res[K][K]={0};
    while(C+K<N)
    {
        int i,j;
        for (i=R;i<R+K;i++)
        {
            for (j=C;j<C+K;j++)
            {
                res[R][C]+= mat[i][j];
            }
        }
        printf(" Le%d ",res[R][C]);
        R++;
        if(R+K==N)
        {
            R=0;
            C++;
        }
        return 0;
    }
}
*/
