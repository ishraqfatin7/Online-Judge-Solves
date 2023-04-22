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
const int N = 109;
vi adj[N];
int vis[N], Right[N];
int a[N], b[N];
int n, m;
bool dfs(int u)
{

    for (auto v : adj[u])
    {
        if (vis[v])
            continue;
        vis[v] = 1;
        if (Right[v] == -1 || dfs(Right[v]))
        {
            Right[v] = u;
            return true;
        }
    }
    return false;
}
void solve()
{
    cin >> n >> m;
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    rep(i, n)
    {
        rep(j, m)
        {
            if (abs(a[i] - b[j]) <= 1)
            {
                adj[i].pb(j);
            }
        }
    }
    int ans = 0;
    rep(i, n)
    {
        CLEAR(Right, -1);
        if (dfs(i))
        {
            CLEAR(vis, 0);
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}