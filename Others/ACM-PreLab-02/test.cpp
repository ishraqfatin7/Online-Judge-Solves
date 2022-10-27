#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
const int M = 1e9 + 7;
// const int n = 10e6;
// int arr[n];
// vector<int>v;
void solve()
{
    ll n, m, ans = 0;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll sum = 0;
            for (ll x = i, y = j; x >= 0 && y >= 0; x--, y--)
                sum += a[x][y];
            for (ll x = i + 1, y = j + 1; x < n && y < m; x++, y++)
                sum += a[x][y];
            for (ll x = i + 1, y = j - 1; x < n && y >= 0; x++, y--)
                sum += a[x][y];
            for (ll x = i - 1, y = j + 1; x >= 0 && y < m; x--, y++)
                sum += a[x][y];
            ans = max(sum, ans);
        }
    }
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
