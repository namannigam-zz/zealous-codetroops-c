#include <iostream>
#include <string.h>
#define MAX 100000
#define uli unsigned long int

using namespace std;

int main()
{
    int n,q;
    int toq,l,r;
    int i,j,k;
    bool flag=false;
    cin>>n>>q;
    uli A[n],B[n];
    for(i=1;i<=n;i++)
        cin>>A[i];
    for(j=1;j<=n;j++)
        cin>>B[j];
    while(q--)
    {
        uli sum=0;
        cin>>toq>>l>>r;
        if(toq==1)
            flag=true;
        else
            flag=false;
        for(k=l;k<=r;k++)
            {
                if(flag)
                {
                    sum+=A[k];
                    flag=false;
                }
                else
                {
                    sum+=B[k];
                    flag=true;
                }
            }
        cout<<sum<<"\n";
    }
    return 0;
}
