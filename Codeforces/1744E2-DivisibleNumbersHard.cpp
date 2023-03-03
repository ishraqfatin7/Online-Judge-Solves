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
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vll countdivs(ll n)
{
    vll divs;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.pb(i);
            if (i * i != n)
                divs.pb(n / i);
        }
    }
    return divs;
}

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = -1, y = -1;
    ll ans = a * b;
    vll divsA = countdivs(a);
    vll divsB = countdivs(b);
    for (auto i : divsA)
    {
        for (auto j : divsB)
        {
            if (i * j > d)
                break;
            ll g = i * j;
            ll y = d / g * g;
            if (y <= b)
                continue;
            ll cur = a * b;
            cur /= __gcd(cur, y);
            if (cur <= c and (a + cur) / cur * cur <= c)
            {
                x = (a + cur) / cur * cur;
                y = y;
                break;
            }
        }
        if (x != -1)
            break;
    }
    cout << x << " " << y << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}