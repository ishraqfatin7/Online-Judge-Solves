#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>
#define pll pair<ll, ll>
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
bool f = false;

void dfs(int u, int cnt)
{
    if (vis[u])
    {
        if (cnt == 3)
        {
            f = true;
        }
        return;
    }
    vis[u] = true;
    // cout << u << " ";
    for (auto &v : g[u])
    {
        {
            dfs(v, cnt + 1);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    rep1(i, n)
    {
        int x;
        cin >> x;
        arr[i] = x;
        g[x].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        dfs(arr[i], 0);
        if (f)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}