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
const ll n = 1e6 + 9;
vector<ll> phi(n + 1, 0);
vector<ll> divs(n + 1, 0);
void phi_1_to_N()
{
    phi[0] = 0;
    phi[1] = 1;
    for (ll i = 2; i <= n; i++)
        phi[i] = i;
    for (ll i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (ll j = i; j <= n; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
        // phi[i]+=phi[i-1];
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
        {
            divs[j] += (i * phi[i]);
        }
    }
}

void solve()
{   ll x; 
    cin >> x;
    ll ans = ((divs[x] + 1) * x) / 2;
     cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    phi_1_to_N();
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}