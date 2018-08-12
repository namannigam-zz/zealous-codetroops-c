#include <iostream>
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
#include<ctype.h>
#include<stdlib.h>
#define mod 1000000007
#define uli unsigned long int
/*TheQuickBrownFoxJumpedOverTheLazyDog*/
using namespace std;
uli count_alpha[26];
void count_char_freq(string);
void balanced_substr(int);

int main()
{
    uli t;
    //int i;
    cin>>t;
    string inp_str;
    while(t--)
    {
        cin>>inp_str;
        count_char_freq(inp_str);
        //for(i=0;i<26;i++)
          //  cout<<i<<" - "<<count_alpha[i]<<"\n";
        balanced_substr(inp_str.length());
    }
    return 0;
}

void count_char_freq(string str)
{
    uli i;
    memset(count_alpha,0,sizeof(count_alpha));
    for(i=0;i<str.length();i++)
    {
    count_alpha[str[i]-'a']++;
    count_alpha[str[i]-'a']%=2;
    }
}
void balanced_substr(int x)
{
    int i,cnt=1;
    for(i=0;i<26;i++)
        //if(count_alpha[i]%2==1)
          if(count_alpha[i])
              cnt++;
   if(cnt==x)
    cout<<"1\n";
   else
    cout<<"-1\n";
}
