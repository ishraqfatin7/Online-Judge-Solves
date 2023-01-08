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

void solve()
{
    ll n, m, a, b, c, d;
    cin >> n >> m >> a >> b >> c >> d;
    ll vis1[n + 1] = {0}, vis2[m + 1] = {0};
    ll ans = 0;
    ll dr = 1, dc = 1;
    rep(i, n)
    {
        rep(j, m)
        {
            vis1[a] = 1;
            vis2[b] = 1;
            if (vis1[c] == 1 || vis2[d] == 1)
            {
                break;
            }
            ans++;
            if (a + dr > n || a + dr < 1)
                dr *= -1;
            if (b + dc > m || b + dc < 1)
                dc *= -1;
            a += dr;
            b += dc;
        }
    }
    cout << ans << endl;
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