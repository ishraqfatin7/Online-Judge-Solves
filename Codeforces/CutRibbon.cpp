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
int dp[4009];
int dfs(int n, int a, int b, int c, int cnt)
{

    if (n < 0)
    {
        return -1e9;
    }
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int x;
    x = 1 + dfs(n - a, a, b, c, cnt);
    x = max(x, dfs(n - b, a, b, c, cnt) + 1);
    x = max(x, dfs(n - c, a, b, c, cnt) + 1);
    return dp[n] = x;
}

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    CLEAR(dp, -1);
    int ans = dfs(n, a, b, c, 1);
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}