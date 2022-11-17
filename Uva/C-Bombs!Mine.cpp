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
int dx[] = {0, 0, -1, +1};
int dy[] = {+1, -1, 0, 0};
const int N = 1e3 + 9;
bool vis[N][N];
int dist[N][N];
int r, c, rowN;
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
bool ok(int x, int y)
{
    return (x >= 0 && y >= 0 && x < r && y < c && !vis[x][y]);
}
void bfs(int u, int v)
{
    queue<pii> q;
    vis[u][v] = 1;
    q.push({u, v});

    while (!q.empty())
    {
        pii x = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int X = x.first + dx[i];
            int Y = x.second + dy[i];

            if (ok(X, Y))
            {
                q.push({X, Y});
                vis[X][Y] = 1;
                dist[X][Y] = dist[x.first][x.second] + 1;
            }
        }
    }
}

void solve()
{

    while (cin >> r >> c and r and c)
    {
        memset(vis, 0, sizeof(vis));
        memset(dist, 0, sizeof(dist));
        cin >> rowN;
        for (int i = 0; i < rowN; i++)
        {
            int row, bomb;
            cin >> row >> bomb;
            for (int j = 0; j < bomb; j++)
            {
                int col;
                cin >> col;
                vis[row][col] = 1;
            }
        }
        int startR, endR, startCol, endCol;
        cin >> startR >> startCol >> endR >> endCol;
        bfs(startR, startCol);
        cout << dist[endR][endCol] << endl;
    }
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