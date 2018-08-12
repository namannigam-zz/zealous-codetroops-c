#include<iostream>
#define MAX 1000000

using namespace std;
int main()
{
    int tc;
    int L,i,j,k,max_len,tot_time=0;
    int upr[MAX],lwr[MAX],timings[MAX];
    cin>>tc;
    while(tc--)
    {
        cin>>L;
        for(i=1;i<L-1;i++)
            cin>>upr[i];
        for(j=1;j<L-1;j++)
            cin>>lwr[j];
        for(k=1;k<L-1;k++)
        {
        max_len=((upr[k]>lwr[k])?upr[k]:lwr[k]);
        timings[k]=k+max_len;
        if(timings[k]>tot_time)
            tot_time=timings[k];
        }
        if(tot_time<L)
        	tot_time=L;
       	cout<<tot_time<<"\n";
    }
    return 0;
}