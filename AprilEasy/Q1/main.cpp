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

#define mod 1000000007
#define ll long long
#define uli unsigned long int
#define li long int
#define MAX 100


using namespace std;
int alc_char_freq[26];
int bob_char_freq[26];

void alc_count_char_freq(string);
void bob_count_char_freq(string);

int main()
{
    int tc;
    string alc_str,bob_str;
    int j;
    bool alc_win=false;
    bool bob_win=false;
    cin >> tc;
    while(tc--)
    {
        cin>>alc_str;
        cin>>bob_str;
        alc_count_char_freq(alc_str);
        bob_count_char_freq(bob_str);
        for(j=0;j<26;j++)
        {
        	if(bob_char_freq[j]==alc_char_freq[j])
        		continue;
        	else
        		if(bob_char_freq[j]>alc_char_freq[j])
        			bob_win=true;
        		else alc_win=true;
         }
         if((bob_win && alc_win) || ((!bob_win)&&(!alc_win)))
         	cout<<"You draw some.\n";
         else if(bob_win)
         		cout<<"You lose some.\n";
         	  else
         		cout<<"You win some.\n";
    }
    return 0;
}

void alc_count_char_freq(string str)
{
    int i;
    memset(alc_char_freq,0,sizeof(alc_char_freq));
    for(i=0;i<str.length();i++)
    	alc_char_freq[str[i]-'a']++;
}

void bob_count_char_freq(string str)
{
    int i;
    memset(bob_char_freq,0,sizeof(bob_char_freq));
    for(i=0;i<str.length();i++)
    	bob_char_freq[str[i]-'a']++;
}
