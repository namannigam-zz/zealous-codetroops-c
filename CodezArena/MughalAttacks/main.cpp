#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<string.h>
#include<bitset>
#include<algorithm>
#include<vector>
#include<set>
#include<limits.h>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>

#define MAX 101
using namespace std;

int mat_cit[MAX][MAX];
int main()
{
    int N,X;
    int i,j,k;
    int a1,a2;
    int cnt=0;
    cin>>N>>X;
    memset(mat_cit,0,sizeof(mat_cit));
    for(i=1;i<N;i++)
    {
    	cin>>a1>>a2;
    	mat_cit[a1][a2]=1;
    	mat_cit[a2][a1]=1;
    }

    for(j=1;j<=N;j++)
    {
    	int sum=0;
    	for(k=1;k<=N;k++)
    		{
    		    //cout<<mat_cit[j][k]<<"\n";
    		    sum+=mat_cit[j][k];}
    	if(sum==X)
    		{	cnt++;}
    }
    cout<<(cnt*2);
    return 0;
}
