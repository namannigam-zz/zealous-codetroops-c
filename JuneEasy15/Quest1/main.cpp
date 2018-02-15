#include <iostream>
using namespace std;
bool is_ver_cool(int,int);
int main()
{
    int T,R,K;
    int i,cnt=0;
    bool verycool;
    cin>>T;
    while(T--)
    {
    	cin>>R>>K;
    	for(i=1;i<=R;i++)
    	{
    		verycool=is_ver_cool(i,K);
    		if(verycool)
    			cnt++;
    	}
    }
    cout<<cnt;
    return 0;
}

bool is_ver_cool(int i,int K)
{
    int c=0;

if(c>=K)
    return true;
else
    return false;
}
