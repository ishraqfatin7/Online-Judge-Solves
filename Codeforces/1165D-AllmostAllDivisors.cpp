#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    ll ans = v[0] * v[n - 1];
    ll cnt = 0;
    vll divs;
    for (ll i = 2; i * i <= ans; i++)
    {
        if (ans % i == 0)
        {
            divs.pb(i);
            if (i != ans / i)
            {
                divs.pb(ans / i);
            }
        }
    }
    sort(all(divs));
    if (divs != v)
    {
        cout << -1 << endl;
    }
    else
        cout << ans << endl;
}

int main()
{
    FAST;

    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}