#include<iostream>
#include<vector>
#include<fstream>
#include<functional>
#include<iomanip>


double testfunction(double x, double k);

template<typename... Ts>
using custom_function_t = double(*) (double, Ts...);

template< typename... Ts>
double test( custom_function_t<Ts...> f, Ts... args, double min, double max, int m, int n)
{
    double ans=0;
    double step=(max-min)/100.00;
    for (double x=min;x<=max;x=x+(max-min)/100)
    {
        ans=ans+(step/6.0)*(f(x, args...)+4*f(x+0.5*step, args...)+f(x+step, args...));
    }
    return(ans);
}

int main()
{
    double ans=0;
    std::cout<<test(testfunction,2.0,0.0,1.0,0,0)<<std::endl;
    return(0);
}

double testfunction(double x, double k)
{
    double ans=0;
    ans=x*x*k;
    return(ans);
}