#include <iostream>

using namespace std;
Rsum(int);
Factorial(int);
int main()
{
    int a,b;
    int T;
    int fact,x,i;
    int res=0;
    while(T--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            fact=Factorial(i);
            x=Rsum(fact);
            res+=x;
        }
    }

    cout << "Hello world!" << endl;
    return 0;
}
int Rsum(int num)
{
    int val=0;
    while(num)
    {
        val+=(num%10)
        num=num/10
    }
    if(num/10)
        Rsum(num);

    return val;
}
int Factorial(int f)
{
    int x=1;
    if(f==0)
        return 1;
    if(f>0)
    {
        x=f*Factorial(f-1);
    }
    return x;
}
