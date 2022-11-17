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
#define clear(a, x) memset(a, x, sizeof(a));
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
const int N = 1e5 + 9;
vi adj[N];
bool vis[N];
int cnt = 0;
void dfs(int u, int root, int k, int m)
{

    if (k > m)
        return;

    if (adj[u].size() == 1 and u != 1)
        cnt++;
    for (auto x : adj[u])
    {
        if (x != root)
        {
            if (!vis[x])
                dfs(x, u, 0, m);
            else
                dfs(x, u, k + 1, m);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
   rep1(i,n)
        cin >> vis[i];
    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0, vis[1], m);
    cout << cnt << endl;
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