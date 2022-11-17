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
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
map<int, int> vis;
// void dfs(int u, int cnt, int len)
// {
//     vis[u] = 1;
//     for (auto v : adj[u])
//     {
//         if (!vis[v])
//         {
//             dfs(v, cnt + 1, len);
//             if (cnt == len)
//                 return;
//         }
//     }
// }

void bfs(map<int, vi> adj, int u)
{
    queue<int> q;
    q.push(u);
    vis[u] = 0;
    while (!q.empty())
    {
        int x = q.front();
        // cout << u << " ";
        q.pop();
        for (auto v : adj[x])
        {
            if (!vis.count(v))
            {

                vis[v] = vis[x] + 1;
                q.push(v);
            }
        }
    }
}

void solve()
{
    int t = 1, n;
    while (cin >> n and n)
    {
        map<int, vi> graph;

        rep(i, n)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int s, ttl;
        while (cin >> s >> ttl and (s || ttl))
        {

            queue<int> q;
            map<int, int> vis;
            int cnt = 1;
            vis[s] = 0;
            q.push(s);
            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                for (auto v : graph[u])
                {

                    if (!vis.count(v))
                    {
                        vis[v] = vis[u] + 1;
                        if (vis[v] <= ttl)
                        {
                            q.push(v);
                            ++cnt;
                        }
                    }
                }
            }
            cout << "Case " << t++ << ": " << graph.size() - cnt << " nodes not reachable from node " << s << " with TTL = " << ttl << "." << endl;
        }
    }
    return;
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