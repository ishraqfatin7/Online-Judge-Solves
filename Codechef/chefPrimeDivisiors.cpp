#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    ll a, b, d;
    cin >> a >> b;
    d = __gcd(a, b);
    while (b > 1 && d > 1)
    {
        b /= d;

        d = __gcd(a, b);
    }
    if (b > 1)
    {

        cout << "No"
             << "\n";
    }
    else
        cout << "Yes"
             << "\n";
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}