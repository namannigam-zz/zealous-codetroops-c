#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int T,i;
	long long int n,ans;
	//int pw;
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>n;
		int cnt=0;
		while(n)
        {
            n=n/2;
            cnt++;
        }
        ans=pow(2,cnt);
		cout<<ans<<"\n";
	}
	return 0;
}
