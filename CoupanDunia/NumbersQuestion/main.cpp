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


using namespace std;

int count_odd_divisors(long int,long int);
bool odd_divisors(long int);

int main()
{
    int tc;
    long int L,R;
    cin>>tc;
    cout<<(long int) sqrt(tc);
    while(tc--)
    {
        cin>>L>>R;
        cout<<count_odd_divisors(L,R);
    }
    return 0;
}

int count_odd_divisors(long int l,long int r)
{
    long int i;
    int cnt=0;
    for(i=l;i<=r;i++)
       {
           if(odd_divisors(i))
            {
                cout<<i<<" has odd divisors.\n";
                cnt++;
            }
       }
    return cnt;
}

bool odd_divisors(long int x)
{
    long int N=(sqrt(x));
    if(x==1)
        return true;
    if((N*N)==x)
        return true;
    else
        return false;
}
