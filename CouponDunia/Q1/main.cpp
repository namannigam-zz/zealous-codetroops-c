#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
string condenseString(string);
int main()
{
    string res;
    string _str;
    getline(cin, _str);
    res = condenseString(_str);
    cout << res;

    return 0;
}

/*
 * Complete the function below.
 */
string condenseString(string str)
{
  string str_op="";
    int i,j,char_cnt=1;
    for(i=1;i<=str.length();i++)
    {
        if(str[i]==str[i-1])
            {char_cnt++;}
        else
           {
            if(char_cnt>1)
            {
                if(char_cnt>=4)
                {
                    std::string s = std::to_string(char_cnt);
                    str_op = str_op + s + "@" + str[i-1];
                    char_cnt=1;}
                else{
                    while(char_cnt--)
                    {str_op = str_op + str[i-1];}
                    char_cnt=1;
                }
            }
            else
                {str_op = str_op + str[i-1];}
           }
    }
return str_op;
}
