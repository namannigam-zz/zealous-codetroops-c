#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<string.h>
#include<bitset>
#include<algorithm>
#include<vector>
#include<set>
#include<limits.h>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
#define uli unsigned long int
uli char_freq[26];

using namespace std;
void count_char_freq(string);
void check_balanced(int);
int main()
{
    uli t;
    cin>>t;
    string inp_str;
    while(t--)
    {
        cin>>inp_str;
        count_char_freq(inp_str);
        check_balanced(inp_str.length());
    }
    return 0;
}

void count_char_freq(string str)
{
    uli i;
    memset(char_freq,0,sizeof(char_freq));
    for(i=0;i<str.length();i++)
    {
    char_freq[str[i]-'a']++;
    char_freq[str[i]-'a']%=2;
    }
}

void check_balanced(int x)
{
    int i,cnt=1;
    for(i=0;i<26;i++)
      {
      if(char_freq[i])
            { cnt =-1;break; }
      }
   cout<<cnt<<"\n";
}
