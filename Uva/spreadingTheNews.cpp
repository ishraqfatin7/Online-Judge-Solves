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
const int N = 2500 + 3;
vi g[N];
bool vis[N];
int dist[N];
int ans[N];
void dfs(int u)
{
    vis[u] = 1;
    cout << u << " ";
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

void bfs(int u)
{

    queue<int> q;
    vis[u] = 1;
    q.push(u);
    while (!q.empty())
    {
        int n = q.front();
        q.pop();
        // cout << n << " ";
        for (auto v : g[n])
        {
            if (!vis[v])
            {
                vis[v] = 1;
                dist[v] = dist[n] + 1;
                ans[dist[v]]++;
                q.push(v);
            }
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    int u, v;
    rep(i, n)
    {
        int e;
        cin >> e;
        while (e--)
        {
            int x;
            cin >> x;
            g[i].pb(x);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        memset(vis, 0, sizeof(vis));
        memset(ans,0,sizeof(ans)); 
        memset(dist,0,sizeof(dist)); 
        int source;
        cin >> source;
        bfs(source);
        int mx = *max_element(ans, ans + N);
        if (!mx)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 1; i <= N; i++)
            {
                if (ans[i] == mx)
                {
                    cout << mx << " " << i << endl;
                    break;
                }
            }
        }

        // cout << endl;
    }
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //     for(int i = 1; i<=tt; i++)
    // cin.ignore();
    while (tt--)
    {
        solve();
    }
}