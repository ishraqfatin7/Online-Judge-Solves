#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    x -= a;
    y -= b;
    if (x < 0)
        x = 0;
    if (y < 0)
        y = 0;
    if ((x + y) <= c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}