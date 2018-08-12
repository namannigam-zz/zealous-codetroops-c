#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
     string inp_str;
     cin >> inp_str;
     string maxlex_str=inp_str;
     string tmp_str=inp_str;
     int i;
     int len=inp_str.length();

     for(i=1;i<len;i++)
        {
            rotate(tmp_str.begin(),tmp_str.begin()+1,tmp_str.end());
            if((maxlex_str.compare(tmp_str))< 0)
               maxlex_str=tmp_str;
        }
     cout<< maxlex_str;
     return 0;
}
