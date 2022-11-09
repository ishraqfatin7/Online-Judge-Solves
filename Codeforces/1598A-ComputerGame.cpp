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
char grid[2][202];
int row, col, vis[2][202];
int ans = 0;
void dfs(int u, int v)
{
    vis[u][v] = 1;
    for (int i = 0; i < 8; i++)
    {
        int x = u + dx[i];
        int y = v + dy[i];
        if (x >= 0 && x < 2 && y >= 0 && y < 202 && grid[x][y] == '0' && !vis[x][y])
        {
            dfs(x, y);
        }
    }
}
void solve()
{
    int col;
    cin >> col;
    int row = 2;
    rep(i, row)
    {
        rep(j, col)
        {
            cin >> grid[i][j];
            vis[i][j] = 0;
        }
    }
    dfs(0, 0);
    if (vis[1][col - 1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //    for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}