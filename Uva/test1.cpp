
#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    int x;
    cin >> x;
    ll sum = (((((x * 567) / 9) + 7492) * 235) / 47) - 498;
    int ans = (abs(sum) / 10) % 10;
    cout << ans << endl;
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
