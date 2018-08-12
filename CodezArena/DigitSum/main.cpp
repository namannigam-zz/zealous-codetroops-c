#include <iostream>
#define uli unsigned long int

using namespace std;

bool digitSum(uli);
int main()
{
    int tc;
    int cnt=0;
    uli k,L,R;
    cin>>tc;
    while(tc--)
    {
        cin>>L>>R;
        for(k=L;k<=R;k++)
        {
            if(digitSum(k))
                cnt++;
        }
        cout<<cnt<<"\n";
    }
   return 0;
}


bool digitSum(uli x)
{
    uli temp=x;
    int sum_digit=0;
    while(temp)
    {
        sum_digit+= temp%10;
        temp=temp/10;
    }
    if(x%sum_digit==0)
        return true;
    else
        return false;
}
