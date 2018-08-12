#include <iostream>
#include <math.h>
#include <algorithm>
#include <ctype.h>
#define MAX 100000
#define MOD 1000000007

//int p=1;
//int prime[1000005];
//int a[1000001]={0};

using namespace std;
//void generate_primes(int);
int main()
{
    //generate_primes(1000000);
    /*int cnt=0;
    while(cnt<p)
    {
        cout<<prime[cnt]<<"\n";
        cnt++;
    }
    */
    int tc,X,i,j,k,l;
    long int Ai[MAX],Pi[MAX];
    long int minsum=1;
    long int res=0;
    long int temp;
    cin>>tc;
    while(tc--)
    {
        cin>>X;
        for(i=0;i<X;i++)
            cin>>Pi[i];
        for(j=0;j<X;j++)
            cin>>Ai[j];
        for(k=0;k<X;k++)
            minsum*=Pi[k];
        res=minsum%MOD;
        cout<<res;
        for(l=0;l<X;l++)
        {
            temp=minsum;
            int cnt=1;
            while(cnt<Ai[l])
            {
                temp*=Pi[l];
                cout<<"+"<<temp;
                res=(res+temp)%MOD;
                cnt++;
            }
        }
        cout<<"="<<res<<"\n";
    }

    return 0;
}


/*void generate_primes(int y)
{
    int i,j;
    prime[0]=2;
    for(i=3;i*i<=y;i+=2)
    {
        if(a[i])
            continue;
        prime[p++]=i;
        for(j=i*i;j<=y;j+=2*i)
             a[j]=1;
    }
    for(i;i<=y;i+=2)
    {
        if(!a[i])
            {prime[p++]=i;
            //cout<<i<<" ";
            }
    }
}
*/
