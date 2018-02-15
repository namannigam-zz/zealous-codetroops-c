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
//uli char_freq[26];

using namespace std;
void count_char_freq(string);
int main()
{
    uli t;
    cin>>t;
    string inp_str;
    while(t--)
    {
        cin>>inp_str;
        count_char_freq(inp_str);
    }
    return 0;
}

void count_char_freq(string str)
{
    int i,xor_result=1;
    for(i=0;i<str.length();i++)
    {
        xor_result ^= str[i];
        if(xor_result == 0)
            cout<<str[i]<<" caught you.\n";
        else
            cout<<"Still only 1 occurrence of "<<str[i]<<"\n";

    }
}
