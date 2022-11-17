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
int kx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int ky[] = {-1, 0, 1, -1, 0, 1, -1, 1};
int r, c, k;

int board[10][10];

bool issafe(int i, int j)
{
    if (i < 1 || j < 1 || j > 8 || i > 8)
        return false;
    return true;
}
void bfs(int x, int y)
{
    queue<pii> q;
    board[x][y] = 1;
    q.push({x, y});

    while (!q.empty() && k > 0)
    {

        int size = q.size();
        while (size--)
        {
            pii u = q.front();
            q.pop();
            int newx = u.first;
            int newy = u.second;
            for (int i = 0; i < 8; i++)
            {
                int xx = newx + kx[i];
                int xy = newy + ky[i];
                if (issafe(xx, xy) && !board[xx][xy])
                {
                    board[xx][xy] = 1;
                    q.push({xx, xy});
                }
            }
        }
        k--;
    }
}

void solve()
{
    memset(board, 0, sizeof(board));
    cin >> r >> c >> k;
    bfs(r, c);
    int cnt = 0;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (board[i][j])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //       for(int i = 1; i<=tt; i++)
    //   cin.ignore();
    while (tt--)
    {
        solve();
    }
}