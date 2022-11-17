
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
const int N = 101;
bool vis[N][N];
string s1, s2;
char grid[N][N]; 
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
    return ((x > 0 && x <= 8) && (y > 0 && y <= 8) && !vis[x][y]);
}
void bfs(int u, int v, int endx, int endy)
{
}

void solve()
{

    while (getline(cin, s1))
    {
        for (int i = 1; i <= s1.size(); i++)
        {
            for (int j = 1; j <= s1.size(); j++)
            {
                grid[i][j] = s1[i][j];
            }
        }
    }
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //     for(int i = 1; i<=tt; i++)
    cin.ignore();
    while (tt--)
    {
        solve();
    }
}