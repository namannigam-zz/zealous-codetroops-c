#include <stdio.h>
#include <stdlib.h>
#define MAX 1025
int Winner(int,int,int[MAX][MAX]);
static int part_info[MAX][MAX];
static int parttemp_arr[MAX];
int main()
{
    int N;
    int nop=1,pw=0;
    int a,b;
    int i,j,k,l,m;
    scanf("%d",&N);

    while(pw<N)
    {nop*=2;
    pw++;
    }

    //printf("Participants : %d\n",nop);

    for(a=1;a<=nop;a++)
    {
    for(b=1;b<=nop;b++)
        part_info[a][b]=0;
    }

    for(k=1;k<=nop;k++)
    {
    parttemp_arr[k]=k;
    //printf("%d  ",parttemp_arr[k],k);
    }

    //printf("\n");

    for(i=2;i<=nop;i++)
    {
        for(j=1;j<i;j++)
        {
        scanf("%d",&part_info[i][j]);
        }
    }

    for(l=1;l<=N;l++)
    {
        int count=1;
        for(m=1;m<=nop;m=m+2)
        {
        parttemp_arr[count]= Winner(parttemp_arr[m],parttemp_arr[m+1],part_info);
        //printf("%d  ",parttemp_arr[count]);
        count++;
        }
        //printf("\n");
        nop=nop/2;
    }
    printf("%d",parttemp_arr[1]);
    return 0;
}

int Winner(int p1,int p2,int part_info[MAX][MAX])
{
    if(part_info[p2][p1])
        return p2;
    else
        return p1;
}
