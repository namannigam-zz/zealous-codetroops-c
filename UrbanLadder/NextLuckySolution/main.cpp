#include <bits/stdc++.h>
using namespace std;
int n;
int tc;
string s;
int vis[102][2];
bool dp[102][2];
bool f(int idx, int tight)
{
    if ( idx == n ) return (tight == 0);
    if ( vis[idx][tight] == tc ) return dp[idx][tight];
    vis[idx][tight] = tc;
    bool ans = false;
    if ( tight == 0 ) ans = ans | f(idx+1,0);
    else {
        if ( s[idx] < '3' ) {
            ans = ans | f(idx+1,0);
        }
        else if ( s[idx] == '3' ) {
            ans = ans | f(idx+1,1);
            ans = ans | f(idx+1,0);
        }
        else if ( s[idx] > '3' && s[idx] < '5' ) {
            ans = ans | f(idx+1,0);
        }
        else if ( s[idx] == '5' ) {
            ans = ans | f(idx+1,1);
        }
        else ans = false;
    }
    dp[idx][tight] = ans;
    return ans;
}
void go(int idx, int tight)
{
    if ( idx == n ) return;
    if ( tight == 0 ) {
        printf("3");
        go(idx+1,0);
    }
    else {
        if ( s[idx] < '3' ) {
            printf("3");
            go(idx+1,0);
        }
        else if ( s[idx] == '3' ) {
            if ( f(idx+1,1) ) {
                printf("3");
                go(idx+1,1);
            }
            else {
                printf("5");
                go(idx+1,0);
            }
        }
        else if ( s[idx] > '3' && s[idx] < '5' ) {
            printf("5");
            go(idx+1,0);
        }
        else if ( s[idx] == '5' ) {
            printf("5");
            go(idx+1,1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for ( tc = 1; tc <= t; tc++ ) {
        cin >> s;
        n = (int)s.size();
        bool ans = f(0,1);
        if ( !ans ) {
            for ( int i = 0; i < n+1; i++ ) printf("3");
        }
        else go(0,1);
        printf("\n");
    }
    return 0;
}
