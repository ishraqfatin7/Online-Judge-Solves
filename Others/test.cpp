#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

ll LCM(ll a, ll b)
{
    ll gcd = __gcd(a, b);
    return a * b / gcd;
}

void solve(int tt)
{
    ll a, b, l;
    cin >> a >> b >> l;
    ll x = LCM(a, b);
    if (l % x)
    {
        cout << "Case " << tt << ": "
             << "impossible" << endl;
    }
    else
    {
        set<ll> s;
        for (ll i = 1; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                s.insert(i);
                s.insert(l / i);
            }
        }
        // cout << "Case " << tt << ": " << s.size() << endl;
        ll ans = 0;
        for (auto i : s)
        {
            if (LCM(x, i) == l)
            {

                ans = i;
                break;
            }
        }
        cout << "Case " << tt << ": " << ans << "\n";
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}