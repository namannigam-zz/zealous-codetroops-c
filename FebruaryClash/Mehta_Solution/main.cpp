#include <bits/stdc++.h>
#define lli long long
#define M 1000000007
using namespace std;
lli A[16][16];
lli res[16][16];
void pre()
{
    for ( int i = 0; i < (1<<4); i++ ) {
        A[i][i] += 6LL;
        A[i][i^(1<<0)] += 1;
        A[i][i^(1<<1)] += 1;
        A[i][i^(1<<2)] += 1;
        A[i][i^(1<<3)] += 1;
    }
    return;
}
void init()
{
    for ( int i = 0; i < 16; i++ ) {
        for ( int j = 0; j < 16; j++ ) {
            if ( i != j ) res[i][j] = 0;
            else res[i][j] = 1;
            A[i][j] = 0;
        }
    }
}
void mul(lli A1[][16], lli A2[][16])
{
    lli C[16][16];
    for ( int i = 0; i < 16; i++ ) {
        for ( int j = 0; j < 16; j++ ) {
            C[i][j] = 0;
            for ( int k = 0; k < 16; k++ ) {
                C[i][j] = (C[i][j] + (A1[i][k]*A2[k][j])%M)%M;
            }
        }
    }
    for ( int i = 0; i < 16; i++ ) {
        for ( int j = 0; j < 16; j++ ) A1[i][j] = C[i][j];
    }
    return;
}
void fast_pow(lli x)
{
    while ( x > 0 ) {
        if ( x&1 ) mul(res,A);
        mul(A,A);
        x >>= 1;
    }
    return;
}
int main()
{
    int t,a,b,c,d,fin_mask;
    lli N,ans;
    cin >> t;
    while ( t-- ) {
        cin >> N >> a >> b >> c >> d;
        init();
        pre();
        ans = 0;
        fin_mask = 0;
        if ( a ) fin_mask |= 1;
        if ( b ) fin_mask |= 2;
        if ( c ) fin_mask |= 4;
        if ( d ) fin_mask |= 8;
        fast_pow(N);
        ans = res[0][fin_mask];
        cout << ans << endl;
    }
    return 0;
}
