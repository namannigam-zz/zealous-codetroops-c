#include <iostream>
#include <vector>
#include <thread>
using namespace std;
void seev (const auto &v) {
    for(auto x:v)
    cout<<x<<' ';
    cout<<"\n\n";
}
int main(){
    vector<int> v1 {1,2,3,4,5};
    thread t (seev, v1);
    t.join();
    return 0;
}
