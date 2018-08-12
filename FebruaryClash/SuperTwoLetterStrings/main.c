#include <stdio.h>
#include <stdlib.h>
#define MAXN 10007
#define MOD 1000000007
#define ll long long int
ll dp[MAXN][12];
int main()
{
	void pre();
    int t;
    scanf("%d",&t);
    while(t--) {solve();}
    return 0;
}


void solve()
{
	int n,p;
	scanf("%d",&n);
	scanf("%d",&p);
	printf("%lld\n",(dp[n+1][p+1]%MOD));
}


void pre()
{
    int i,j,k,l,m,n,p;
	for(m=0;m<MAXN;m++)
		dp[m][0]=0;
	for(n=0;n<12;n++)
		dp[0][n]=0;
	for(k=1;k<MAXN;k++)
		dp[k][1] = 1;
	for(l=1;l<12;l++)
		dp[1][l] = 1;
	for(p=1;p<12;p++)
        {
		for(i=2;i<MAXN;i++)
		{
			for(j=i-1;j>=0;j--)
			{
				if(i-j < p)
				 {
					dp[i][p] += dp[j][p];
					dp[i][p] %= MOD;
				}
			}
		}
	}
}
