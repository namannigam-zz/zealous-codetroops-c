#include<bits/stdc++.h>
using namespace std;
#define ll				long long int
#define vi				vector<int>
#define vl				vector<ll>
#define	pii				pair<int,int>
#define pil				pair<int, ll>
#define pll				pair<ll, ll>
#define pli 			pair<ll, int>
#define pb(v, a)		v.push_back(a)
#define mp(a, b)		make_pair(a, b)
#define MOD				1000000007
#define rep(i, a, b)	for(i=a; i<=b; ++i)
#define rrep(i, a, b)	for(i=a; i>=b; --i)
#define si(a)			scanf("%d", &a)
#define sl(a)			scanf("%lld", &a)
#define pi(a)			printf("%d", a)
#define pl(a)			printf("%lld", a)
#define pn 				printf("\n")
ll pow_mod(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}
int debug(int n)
{
	vector<int> v;
	int i;
	rep(i, 1, n)
		pb(v, i);
	int ans = 0;
	do
	{
		int val = 0;
		rep(i, 1, n - 1)
			val = val + abs(v[i] - v[i - 1]);
		ans = max(ans, val);
	}while(next_permutation(v.begin(), v.end()));
	return ans;
}
int main()
{
	int t, i;
	si(t);
	assert(t >= 1 && t <= 10000);
	rep(i, 1, t)
	{
		int n;
		si(n);
		assert(n >= 1 && n <= 100000);
		if(n == 1)
			printf("1\n");
		else if((n & 1) == 0)
		{
			ll ans;
			ll tmp = (n + 1) / 2;
			ans = (2 * tmp + 1) * (n / 2) - tmp - 1;
			// assert(ans == debug(n));
			pl(ans);
			pn;
		}
		else
		{
			ll ans;
			ll tmp = (n + 1) / 2;
			ans = (2 * tmp + 1) * (n / 2) - tmp;
			pl(ans);
			// assert(ans == debug(n));
			pn;
		}
	}
	return 0;
}
