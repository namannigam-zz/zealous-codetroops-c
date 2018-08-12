#include <iostream>
#include <string.h>

using namespace std;
int char_count_str1[26];
int char_count_str2[26];
void str1_char_freq(string);
void str2_char_freq(string);
void subseq_check();
int main()
{
    int tc;
    cin>>tc;
    string inp_str1,inp_str2;
    while(tc--)
    {
        cin>>inp_str1>>inp_str2;
        str1_char_freq(inp_str1);
        str2_char_freq(inp_str2);
        subseq_check();
    }
    return 0;
}

void str1_char_freq(string str)
{
    int i;
    memset(char_count_str1,0,sizeof(char_count_str1));
    for(i=0;i<str.length();i++)
        char_count_str1[str[i]-'a']++;
}

void str2_char_freq(string str)
{
    int i;
    memset(char_count_str2,0,sizeof(char_count_str2));
    for(i=0;i<str.length();i++)
        char_count_str2[str[i]-'a']++;
}

void subseq_check()
{
    int i;
    bool flag=false;
    for(i=0;i<26;i++)
    {  if(char_count_str1[i] && char_count_str2[i])
          {flag=true;break;}
    }
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
