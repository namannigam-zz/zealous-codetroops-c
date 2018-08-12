#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int char_freq[26];

void string_char_freq(string);
void make_palindrome(int);

int main()
{
    int tc;
    string str;
    cin>>tc;
    while(tc--)
    {
        cin>>str;
        string_char_freq(str);
        make_palindrome(str.length());
    }
    return 0;
}

void string_char_freq(string str)
{
    unsigned int i;
    memset(char_freq,0,sizeof(char_freq));
    for(i=0;i<str.length();i++)
        char_freq[str[i]-'a']++;
}

void make_palindrome(int len)
{
    int i,res=0;
    for(i=0;i<26;i++)
            if(char_freq[i]%2==1)
                res++;
    if(res>=1) res--;
    cout<<res<<"\n";
}
