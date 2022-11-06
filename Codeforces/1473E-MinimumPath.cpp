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
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
const int N = 1e6 + 9;
vector<pii> graph[N];
bool vis[N];
int mn = 1e9;

//ei problem korte mela kichu par kore asha lagbe
void dfs(int u)
{
    vis[u] = true;
    cout << u << " ";
    for (auto v : graph[u])
    {
        if (vis[v.F])
            continue;
        mn = min(mn, v.S);
        dfs(v.F);
    }
    // for (auto v : graph[u])
    // {
    //     if (!vis[v.F])
    //     {
    //         vis[v.F] = true;
    //         dfs(v.F);
    //     }
    // }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    rep(i, m)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].pb({v, w});
        graph[v].pb({u, w});
    }

    for (int i = 1; i <= n; i++)
    {
    }

    dfs(1);
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}