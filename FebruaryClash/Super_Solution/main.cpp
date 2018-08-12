#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<bitset>
#include<algorithm>
#include<vector>
#include<set>
#include<limits.h>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define mod 1000000007 // 10**9 + 7
#define INF 1e9
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))
#define CLEAR(a) memset((a),0,sizeof(a))
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, b, a) for (int i = b; i > a; i--)
#define all(v) v.begin(), v.end()
#define GETCHAR getchar_unlocked
#define pi(n) printf("%d\n",n)
#define pll(n) printf("%lld\n",n)
#define rk() int t; scanf("%d",&t); while(t--)
using namespace std;
const double pi = acos(-1.0);
//freopen("in","r",stdin);
//freopen("out","w",stdout);
const int er[8] = {-1,-1,0,1,1,1,0,-1};
const int ec[8] = {0,1,1,1,0,-1,-1,-1};
const int fr[4] = {-1,1,0,0};
const int fc[4] = {0,0,1,-1};
typedef unsigned long long ull;
typedef long long ll;
typedef long l;
typedef pair<int,int> pii;
typedef vector<int> vec;
typedef vector<pii> vpii;
ll po(ll a,ll p)
{ll ret = 1;while(p){if(p&1)ret = (ret*a)%mod;a=(a*a)%mod;p=p>>1;}return ret%mod;}
/*
const int MAX = 1000000;
int flag[MAX>>6],a[78500];
#define chk(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define set(x) (flag[x>>6]|=(1<<((x>>1)&31)))
void sieve(){
        register int i,j,k;
        for(i=3;i<=1000;i+=2)
                if(!chk(i))
                        for(j=i*i,k=i<<1;j<MAX;j+=k)
                                set(j);
        a[1] = 2;
        for(i=3,j=2;i<=MAX;i+=2)
                if(!chk(i))
                        a[j++] = i;
}
*/
ll dp[10004];
int n,k;
int main(){
    rk(){
	    cin>>n>>k;
		CLEAR(dp);
		dp[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=i-1;(j>=0)&&(i-j<=k);j--){
				dp[i]+=dp[j];
				dp[i]=(dp[i])%mod;
			}
		}
		printf("%lld\n",dp[n]);
	}
    return 0;
}
