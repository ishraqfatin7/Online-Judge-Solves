#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum += a[i];

    ll attack = sum;
    ll defense = 0;
    ll ans = INT_MIN;
    for (ll i = n - 1; i >= 1; i--)
    {
        attack -= a[n - i - 1];
        defense += (1000 - a[n - i - 1]);
        ans = max(ans, attack * defense);
    }
    cout << ans << endl;
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
