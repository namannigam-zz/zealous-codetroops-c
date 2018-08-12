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

int char_freq[26];

using namespace std;
bool check_repeated();
void count_char_freq(string);

int main()
{
    int t;
    cin>>t;
    string inp_str;
    while(t--)
    {
        cin>>inp_str;
        count_char_freq(inp_str);
        if(check_repeated())
        	cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}


void count_char_freq(string str)
{
    int i;
    memset(char_freq,0,sizeof(char_freq));
    for(i=0;i<str.length();i++)
	    char_freq[str[i]-'a']++;
}

bool check_repeated()
{
	int i;
	bool res=false;
	for(i=0;i<26;i++)
	{
		if(char_freq[i]>1)
			{res=true; break;}
		else continue;
	}
	return res;
}
