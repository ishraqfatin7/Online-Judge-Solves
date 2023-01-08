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
const int N = 1e7 + 5;
ll fact[N];

void modfact(ll n, ll m)
{
    fact[0] = 1;
    rep1(i, m)
    {
        fact[i] = fact[i - 1] * i % m;
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vll v(n + 1);
    rep(i, n)
    {
        cin >> v[i];
    }
    modfact(n, m);
    ll ans = 0;
    rep(i, n)
    {
        ll x = v[i];
        ll part1 = 0;
        if (x + 1 < m)
        {
            part1 = fact[x + 1];
        }
        ll y = x;
        ll z = x + 1;
        if (y % 2 == 0)
        {
            y /= 2;
        }
        else
        {
            z /= 2;
        }
        ll part2 = (x % m) * ((y % m) * (z % m) % m) % m;

        ll current = (part1 + part2 + m - 1) % m;

        ans = (ans + current) % m;
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}