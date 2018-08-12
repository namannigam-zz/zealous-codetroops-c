#include <iostream>

using namespace std;

int main()
{
    int t,n,k,j;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cin>>t;
    while(t--)
    {
        int a,b,cnt=0;
        bool flag=true;
        cin>>n>>k;
        if(k>81)
            cout<<"-1\n";
        else
        {
            a=((k/9)+1);
            b=k%9;
            for(j=0;j<10;j++)
            {
                if(arr[j]!=a)
                    cnt++;
                if(cnt==a)
                {
                    b=arr[j];
                    break;
                }
            }
            while(n--)
            {
                if(flag)
                {
                    cout<<a;
                    flag=false;
                }
                else
                {
                    cout<<b;
                    flag=true;
                }
            }
cout<<"\n";
    }
}
return 0;
}
