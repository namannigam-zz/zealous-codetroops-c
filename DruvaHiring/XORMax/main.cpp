#include <iostream>

using namespace std;
void maxxor(long int);
int main()
{
    int tc;
    long int N;
    cin>>tc;
    while(tc--)
    {
        cin>>N;
        maxxor(N);
    }
    return 0;
}

void maxxor(long int x)
{
    long int i,j,occur;
    long int maxim=0;
    for(i=1;i<x;i++)
    {
        for(j=0;j<i;j++)
        {
            if((i^j) > maxim)
                {
                    maxim=i^j;
                    occur=1;
                    continue;
                }
            if(i^j == maxim)
                occur++;
        }
    }
    cout<<maxim<<" "<<(occur*2)<<"\n";

    long int res = 0 ^ (x-1), a = 1;
    while(res){
        res /= 2;
        a <<= 1;
    }
    cout<<--a<<"\n";

}
