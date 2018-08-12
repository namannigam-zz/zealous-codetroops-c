#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<bitset>
#include<algorithm>
#include<vector>
#include<set>
#include<limits.h>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
#define MAX 1000

using namespace std;
unsigned int count_nations(unsigned int,unsigned int);
void fire_spread(unsigned int,unsigned int,unsigned int,unsigned int);

static int mat_fire[MAX][MAX]={0};

int main()
{
    unsigned int N,M,Q,x,y;
    unsigned int i,j,k;
    cin>>N>>M>>Q;
    for(i=1;i<=N;i++)
          for(j=1;j<=M;j++)
                cin>>mat_fire[i][j];

    for(k=1;k<=Q;k++)
    {
        cin>>x>>y;
        if(mat_fire[x][y]==0)
            {cout<<count_nations(N,M)<<"\n";}
        else
            {
                fire_spread(x,y,N,M);
                cout<<count_nations(N,M)<<"\n";
            }
    }
    return 0;
}

unsigned int count_nations(unsigned int N,unsigned int M)
{
    unsigned int i,j;
    unsigned nations=0;
    for(i=1;i<=N;i++)
          for(j=1;j<=M;j++)
                if(mat_fire[i][j])
                    nations++;
    return nations;
}
void fire_spread(unsigned int a,unsigned int b,unsigned RW,unsigned CL)
{
    if(mat_fire[a][b]==0)
        return;
    if(!(((a<=RW)&&(a>=1))&&((a<=CL)&&(b>=1))))
        return;
    else
    {
        mat_fire[a][b]=0;
        fire_spread(a-1,b,RW,CL);
        fire_spread(a+1,b,RW,CL);
        fire_spread(a,b-1,RW,CL);
        fire_spread(a,b+1,RW,CL);
    }
}
