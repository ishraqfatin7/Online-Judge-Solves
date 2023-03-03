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
vll v;

void solve()
{
    ll a, b;
    cin >> a >> b;
    // a = max(a, b);
    // b = min(a, b);
    ll diff = abs(b - a);
    ll ans = lower_bound(all(v), diff) - v.begin();
    while (diff & 1 and !(v[ans] & 1))
        ans++;
    while (!(diff & 1) and v[ans] & 1)
        ans++;
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    ll x = 0, cnt = 0;
    while (x <= 1e10)
    {
        v.pb(x);
        x += ++cnt;
    }
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