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

ll GCD(ll n, ll k)
{
    if (k == 1)
    {
        return true;
    }
    ll x = __gcd(n, k);
    if (x == 1)
    {
        return false;
    }
    return GCD(n, k / x);
}

void solve()
{
    ll n;
    cin >> n;
    vll v(n + 1);
    set<ll> s;
    rep1(i, n)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    bool f = (s.size() == n);
    for (int k = 2; k <= n; k++)
    {
        bool ok = false;
        for (int x = 1; x <= k; x++)
        {
            vector<int> cnt(k, 0);
            for (int i = 1; i <= n; i++)
            {
                cnt[(v[i] + x) % k]++;
            }
            if (cnt[0] < 2)
            {
                ok = true;
                break;
            }
                }
        f &= ok;
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}