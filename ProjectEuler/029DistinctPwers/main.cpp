#include <iostream>
#include <math.h>
#if defined __GNUC__ || defined __APPLE__
#include <ext/hash_map>
#else
#include <hash_map>
#endif
using namespace std;
using namespace __gnu_cxx;
int main()
{
    std::unordered_map<int,int> ls;
    int a,b;
    long int elem;
    int cnt=0;
    for(a=2;a<=100;a++)
        for(b=2;b<=100;b++)
        {
            elem=pow(a,b);
            if(!(ls.containsKey(elem)))
                {
                    cnt++;
                    ls.put(cnt,elem);
                }
        }
    cout<<cnt;
    return 0;
}
