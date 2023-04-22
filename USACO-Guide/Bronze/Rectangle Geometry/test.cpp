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
const int N = 2e5 + 9;

ll arr[N];
struct ST
{
    ll t[4 * N + 2];
    ll cnt[N];
    static const int inf = 1e9;
    ST()
    {
        memset(t, 0, sizeof t);
    }
    void build(int n, int b, int e)
    {
        if (b == e)
        {
            t[n] = arr[b];
            return;
        }
        ll mid = (b + e) >> 1, l = n << 1, r = l | 1;
        build(l, b, mid);
        build(r, mid + 1, e);
        t[n] = t[l] + t[r];
    }
    void upd(int n, int b, int e, ll i, ll x)
    {
        if (b > i || e < i)
            return;
        if (b == e && b == i)
        {
            t[n] = x;
            return;
        }
        ll mid = (b + e) >> 1, l = n << 1, r = l | 1;
        upd(l, b, mid, i, x);
        upd(r, mid + 1, e, i, x);
        t[n] = t[l] + t[r];
    }
    ll query(int n, int b, int e, ll i, ll j)
    {
        if (b > j || e < i)
            return 0;
        if (b >= i && e <= j)
            return t[n];
        ll mid = (b + e) >> 1, l = n << 1, r = l | 1;
        ll L = query(l, b, mid, i, j);
        ll R = query(r, mid + 1, e, i, j);
        return L + R;
    }
} t;
void solve()
{
    ll n, m;
    cin >> n >> m;
    rep1(i, n)
    {
        cin >> arr[i];
    }

    t.build(1, 1, n);
    while (m--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll k, u;
            cin >> k >> u;
            t.upd(1, 1, n, k, u);
        }
        else
        {
            ll a, b;
            cin >> a >> b;
            cout << t.query(1, 1, n, a, b) << endl;
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
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}