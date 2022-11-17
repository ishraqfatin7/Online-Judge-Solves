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
const int N = 1e5 + 5;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
string s[N];
vector<vector<bool>> vis;
int n, m;
int cnt;
bool valid(int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m || vis[x][y] || s[x][y] == '0')
    {
        return 0;
    }
    return 1;
}

void dfs(int x, int y)
{
    vis[x][y] = 1;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (valid(new_x, new_y))
        {
            dfs(new_x, new_y);
        }
    }
}

void solve()
{
    cin >> n >> m;
    vis.clear();
    vis.resize(n, vector<bool>(m, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            assert(sz(s[i]) == m);
            if (s[i][j] != '0' && !vis[i][j])
            {
                cnt = 0;
                dfs(i, j);
                ans.pb(cnt);
            }
        }
    }
    sort(all(ans));
    reverse(all(ans));
    debug(ans);
    // debug(color);
    ll int score = 0;
    FOR(i, 0, sz(ans))
    {
        if (i & 1)
            score += ans[i];
    }
    printf("%lld\n", score);
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