#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int p, q, r, s, t, u;
double f(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

void binarySearch()
{

    double lo = 0, hi = 1;
    double mid = 0;
    int itr = 0;
    while (hi - lo > 1e-7)
    {
        mid = lo + (hi - lo) / 2;
        if (f(lo) * f(mid) <= 0)
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    
    // if(isEnough(hi)){
    //     cout <<hi<<endl;
    // }
    // else cout <<lo<<endl;
    cout << fixed<< setprecision(4)<< mid << endl;
}

int main()
{
    while(cin >> p>>q>>r>>s>>t>>u){
        if (f(0) * f(1) > 0)
        {
            printf("No solution\n");
        }
        else
        {
             binarySearch();
        }
    }
}