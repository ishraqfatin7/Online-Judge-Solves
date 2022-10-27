#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = (a - b) / 2;
    ll y = x + b;
    if (a < b || (x + y) != a)
    {
        cout << "impossible" << endl;
    }
    else
        cout << y << " " << x << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
