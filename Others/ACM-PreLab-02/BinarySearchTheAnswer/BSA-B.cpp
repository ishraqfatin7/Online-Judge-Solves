#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

ll computeSum(ll n)
{
    return n * (n + 1) / 2;
}

ll binarySearch(ll x)
{
    ll lo = 0;
    ll hi = 10e9;
    ll mid, ans = 0;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;

        ll sum = computeSum(mid);

        if (sum <= x)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}
void solve(int t)
{
    ll n;
    cin >> n;
    //  cout << computeSum(5) << endl;
    cout << binarySearch(n) << endl;
}

int main()
{

    int tt =1;
   
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}