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
const int N = 1e5 + 9;
bool vis[N];

int dfs(int u, vi &v, int cnt)
{
    if (vis[u])
    {
        return -1;
    }
    vis[u] = true;
    if (u == 2)
    {
        return cnt;
    }
    return dfs(v[u], v, cnt + 1);
}

void solve()
{
    int n;
    cin >> n;
    vi v(n + 1);
    rep1(i, n)
    {
        cin >> v[i];
    }
    // int moves = dfs(1, v, 0);
    // if (vis[2])
    // {
    //     cout << moves << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }
    cout << dfs(1, v, 0) << endl;
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