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
#include <algorithm>
using namespace std;
void calculateProfit(vector<int>);
int main() {

    int _prices_size;
    cin >> _prices_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _prices;
    int _prices_item;
    for(int _prices_i=0; _prices_i<_prices_size; _prices_i++) {
        cin >> _prices_item;
        _prices.push_back(_prices_item);
    }

    calculateProfit(_prices);

    return 0;
}



void calculateProfit(vector < int > prices) {
    int max_diff = prices.at(1) - prices.at(0);
    int min_element = prices.at(0);
    int i;
    int a=0,b=1;
    int val_a=prices.at(0),val_b=prices.at(1);
    for(i = 1; i < prices.size(); i++)
    {
    if(prices.at(i) - min_element > max_diff)
        {
            max_diff = prices.at(i) - min_element;
            b=i;
            val_b=prices.at(i);
        }
        if(prices.at(i) < min_element)
        {
            min_element = prices.at(i);
            a=i;
            val_a=prices.at(i);
        }

    }
    cout<<a+1<<" "<<val_a<<"\n";
    cout<<b+1<<" "<<val_b;
}
