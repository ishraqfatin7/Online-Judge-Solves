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
const int N = 1e6;
vi adj[N];

ll cnt = 0;
void dfs(int u, vector<bool> &vis)
{

    cnt++;
    if (cnt > N)
    {
        return;
    }
    vis[u] = 1;
    for (auto v : adj[u])
    {
        if (!vis[v])
        {
            dfs(v, vis);
        }
    }
    vis[u] = false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<bool> vis(n + 1, false);
    dfs(1,vis);
    cout << cnt << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //    for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}