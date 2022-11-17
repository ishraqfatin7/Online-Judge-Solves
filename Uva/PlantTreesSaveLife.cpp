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
// int dx[] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
// int dx[] = {0, 0, -1, +1};
// int dy[] = {+1, -1, 0, 0};
int dx[] = {1, -1, 1, -1, 2, 2, -2, -2};
int dy[] = {2, 2, -2, -2, 1, -1, 1, -1};
const int N = 2e5+1;
ll ice[N];
bool vis[N];
vll adj[N];


ll dfs(ll u)
{
    vis[u] = 1;
    ll mn = ice[u];
    for (auto v : adj[u])
    {
        if (!vis[v])
        {
            mn = min(mn, dfs(v));
        }
    }
    return mn;
}
void solve()
{   
    memset(vis,0,sizeof(vis)); 
    int  n, k;
    cin >> n >> k;
    for(ll i =1 ;i<=n;i++)
    {
        cin >> ice[i];
    }
    for (ll i = 1; i <= k; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if(!vis[i])
            ans += dfs(i);
    }
     cout << ans << endl;
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //      for(int i = 1; i<=tt; i++)
    //  cin.ignore();
    while (tt--)
    {
        solve();
    }
}