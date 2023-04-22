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
const ll mod = 998244353;
ll fastExpo(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll fact[1000001];
ll factInv[1000001];
void f()
{

    fact[0] = 1;
    factInv[0] = 1;
}

void solve()
{
    int n;
    cin >> n;
    vi prime(n + 1), power(n + 1);
    unordered_map<ll, ll> m;
    rep(i, n)
    {
        cin >> prime[i] >> power[i];
    }

    // prime subset iteration
    ll ans = 0;
    ll cnt = 0;
    for (ll mask = 1; (mask < 1 << n); ++mask)
    {
        ll prod = 1;
        for (ll i = 0; i < n; ++i)
        {
            if (mask & 1 << i)
            {
            }
        }
    }
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