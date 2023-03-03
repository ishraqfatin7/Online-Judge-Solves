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
const int N = 800 + 9;
vi adj[N];
int in[N], low[N], vis[N], par[N], timer = 0;
bool hasBridge = false;
vector<pii> edges;
void dfs(int u, int par = -1)
{
    in[u] = low[u] = ++timer;
    for (int v : adj[u])
    {
        if (in[v])
        {
            if (v == par)
                par = -1;
            else // backedge
                low[u] = min(low[u], in[v]);
        }
        else
        { // forwardedge
            dfs(v, u);
            if (low[v] > in[u])
            {
                edges.pb({min(u, v), max(u, v)});
                // cout << u << "to" << v << " is bridge" << endl;
            };
            low[u] = min(low[u], low[v]);
        }
    }
}
void solve(int t)
{
    CLEAR(vis, 0);
    CLEAR(low, 0);
    CLEAR(in, 0);
    CLEAR(par, 0);
    for (int i = 0; i <= N; i++)
    {
        adj[i].clear();
    }
    edges.clear();
    int n, m, u, v;
    cin >> n >> m;
    rep(i, m)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1);

    cout << "Caso #" << t << endl;
    if (edges.size() == 0)
    {
        cout << "Sin bloqueos" << endl;
    }
    else
    {
        sort(all(edges));
        cout << edges.size() << endl;
        for (auto x : edges)
        {
            cout << x.first << " " << x.second << endl;
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
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
}