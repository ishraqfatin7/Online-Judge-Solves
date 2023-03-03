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
int ct=0;
int cost[N][N], ans = INT_MAX;

void dfs(int u, int par)
{
    if (u == 1 && par != -1)
    {
        ans = min(ans, ct);
        ct = 0;
        return;
    }
    for (auto v : adj[u])
    {
        if (v != par)
        {
            ct += cost[u][v];
            dfs(v, u);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    rep1(i, n)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb(v);
        adj[v].pb(u);
        cost[u][v] = 0;
        cost[v][u] = w;
    }
    dfs(1, -1);
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
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}