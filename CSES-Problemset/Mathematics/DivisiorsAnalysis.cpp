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
const ll MOD = 1e9 + 7;

ll fastExpo(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res % MOD;
}

ll modInverse(ll a)
{
    return fastExpo(a, MOD - 2);
}

void solve()
{
    ll n;
    cin >> n;
    ll prime[n + 1];
    ll power[n + 1];
    rep(i, n)
    {
        cin >> prime[i] >> power[i];
    }
    ll nod = 1;
    ll sod = 1;
    ll prod = 1;
    ll cnt = 1;
    rep(i, n)
    {
        ll pr = prime[i];
        ll po = power[i];
        nod = (nod * (po + 1)) % MOD;
        ll lob = fastExpo(pr, po + 1) - 1;
        ll hor = pr - 1;
        ll ans = (lob * fastExpo(hor, MOD - 2)) % MOD;
        sod = (sod * ans) % MOD;
        prod = fastExpo(prod, po + 1) * fastExpo(fastExpo(pr, (po * (po + 1) / 2)), cnt) % MOD;
        cnt = cnt * (po + 1) % (MOD - 1);
    }
    cout << nod << " " << sod << " " << prod << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}