#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
int output_count(long long int,int,int,int,int);
int main()
{
    int T,j;
    bool cnt2,cnt3,cnt5,cnt7;
    cin>>T;
    long long int N;
    long long int i;
    string str;
    char buff[10];
    int A,B,C,D;
    for(j=0;j<T;j++)
    {
        cin >>N >> A >> B >> C >> D;
        int cnt=0;
        for(i=1;i<pow(10,N);i++)
        {
        itoa(i,buff,10);
        cnt2=(count(str.begin(),str.end(),2)%2)==A;
        cnt3=(count(str.begin(),str.end(),3)%2)==B;
        cnt5=(count(str.begin(),str.end(),5)%2)==C;
        cnt7=(count(str.begin(),str.end(),7)%2)==D;
        if(cnt2&&cnt3&&cnt5&&cnt7)
            cnt++;
        }
            cout<< cnt;
    }
}
