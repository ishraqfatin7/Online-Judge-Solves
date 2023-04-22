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

ll find(ll a, ll b, ll c, vll &v)
{
    ll l = 0, r = v.size() - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (b - 2 * sqrtl(a * c) < v[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vll v(n);
    rep(i, n) cin >> v[i];
    sort(all(v));
    rep(i, m)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        ll pos = find(a, b, c, v);
        ll x = b - 2 * sqrtl(a * c);
        ll y = b + 2 * sqrtl(a * c);
        if (pos < n and x < v[pos] and v[pos] < y)
        {
            cout << "YES" << endl;
            cout << v[pos] << endl;
        }
        else
            cout << "NO" << endl;
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