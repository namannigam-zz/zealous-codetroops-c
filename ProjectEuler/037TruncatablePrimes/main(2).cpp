#include <iostream>
#include <bits/stdc++.h>
int p=1;
int prime[1000005];
int a[1000001]={0};
using namespace std;
void generate_primes(int);
int main()
{
    cout << "Hello Primes!" << endl;
    generate_primes(1000000);





    return 0;
}

void generate_primes(int y)
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
            cout<<i<<" ";}

    }
}


bool tuncatable_prime(int x)
{


}
