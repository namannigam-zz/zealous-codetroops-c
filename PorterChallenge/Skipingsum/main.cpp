#include <iostream>
#define MAX 100000
using namespace std;

static int Arr[MAX];
int skippingsum(int,int,int,int[]);

int main()
{
    int N,Q,L,R,K;
    int i,j;
    cin>>N>>Q;
    for(i=1;i<=N;i++)
        cin>>Arr[i];
    for(j=1;j<=Q;j++)
    {
        cin>>L>>R>>K;
        cout<<skippingsum(L,R,K,Arr);
    }
    return 0;
}

int skippingsum(int x,int y,int z,int Arr[])
{
    int sum=0;
    while(x<=y)
    {
        sum = sum + Arr[x];
        x=x+z;//check array out of bounds
    }
    return sum;

}
