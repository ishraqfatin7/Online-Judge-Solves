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
const int N = 1e5 + 5;
vi adj[N];
ll weight[N];
bool vis[N];
ll avg = 0;
ll c = 0;
ll dfs(ll u, ll cnt)
{
    vis[u] = true;
    ll curr = weight[u];
    avg += curr;
    c++;
    // cout << cnt <<endl;
    // weight[u] = avg;
    //  cout << avg << " " << cnt << endl;
    for (auto x : adj[u])
    {
        if (!vis[x])
        {
            dfs(x, cnt + 1);
        }
    }
    return cnt;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    rep1(i, n)
    {
        cin >> weight[i];
    }
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        // adj[v].pb(u);
    }
    ll mn = 1e18;
    rep1(i, n)
    {
        if (!vis[i])
        {
            dfs(i, 1);
            // cout << c << ' ' << avg<< endl;
            ll cur = avg / c;
            mn = min(mn, cur);
            avg = 0;
            c = 0;
        }
    }

    cout << mn << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}