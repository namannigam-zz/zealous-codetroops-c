#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>
#define lli long long int

using namespace std;

int count_days(lli);

int main()
{
	lli t,n;
	int days;
	cin>>t;
	while(t--)
	{
		cin>>n;
		days=count_days(n);
		cout<<days<<"\n";
	}
    return 0;
}

/*Since result is expressed as sum of power of 2*/
/*Hence evaluating the number of set bits in the binary representation*/

int count_days(lli n)
{
	int cnt=0;
	while(n)
	{
		n&=(n-1);
		cnt++;
	}
	return cnt;
}
