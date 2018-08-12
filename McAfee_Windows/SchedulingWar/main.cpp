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

#define MAX 100
using namespace std;

int main()
{
    int n,b,si[MAX],Sp[MAX],Bi[MAX][MAX],Sc[MAX];
    //memset(Bi,0,sizeof(Bi));
    int i,j,k;
    cin>>n;
    int starttotal=0;
    for(i=1;i<=n;i++)
       {
           cin>>Sp[i];
           starttotal+=Sp[i];
       }
    cin>>b;
    for(k=1;k<=b;k++)
    {
        cin>>si[k];
        for(j=1;j<=si[k];j++)
            {cin>>Bi[k][j];}
        cin>>Sc[k];
    }


    int restotal=0;
    int ans=0;
    for(k=1;k<=b;k++)
    {
        int curr_sum=0;
        for(j=1;j<=si[k];j++)
              {curr_sum=curr_sum+Sp[Bi[k][j]];}
        if(curr_sum<Sc[k])
            ans=Sc[k]-curr_sum;
        restotal+=ans;
    }
    cout<<restotal<<"\n";
    return 0;
}
