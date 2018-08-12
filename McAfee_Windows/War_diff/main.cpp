#include<iostream>
#include<stdio.h>
#define MAX 100

using namespace std;

int main()
{
    int n,b;
    int Si[MAX];
    int Sb[MAX][MAX];
    int bat_sys[MAX];
    int bat_proc[MAX];
    int i,j,k,l,m;
    int beg_proc_count=0;
    int res_diff_proc=0;
    int inc=0;
    cin>>n; //n<=100
    for(i=1;i<=n;i++)
       {
           cin>>Si[i]; //Processes running on each system by Prateek <70
           beg_proc_count+=Si[i];
       }
    cin>>b; //b<=100

    int tot_proc_chintu=0;
    for(k=1;k<=b;k++)
    {
        cin>>bat_sys[k];
        for(j=1;j<=bat_sys[k];j++)
            {cin>>Sb[k][j];} // Systems to be used by Chintu's batch
        cin>>bat_proc[k];
        tot_proc_chintu+=bat_proc[k];
    }

    for(l=1;l<=b;l++)
    {
        int sys_proc_sum=0;
        for(m=1;m<=bat_sys[l];m++)
                sys_proc_sum+=Si[Sb[l][m]];

        if(sys_proc_sum<bat_proc[l])
            inc=bat_proc[l]-sys_proc_sum;

        res_diff_proc+=inc;
    }

    int ovrl_diff=tot_proc_chintu-beg_proc_count;
    if(res_diff_proc<ovrl_diff)
        res_diff_proc=ovrl_diff;

    cout<<res_diff_proc<<"\n";
    return 0;
}
