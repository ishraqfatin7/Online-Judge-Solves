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

const int N = 201;
vector<int> graph[N];
bool vis[N];
bool f;
void dfs(int u, int p)
{
    vis[u] = 1;
    for (auto v : graph[u])
    {
        if (v == p)
        {
            f = true;
        }
        else if (!vis[v])
        {
            dfs(v, p);
        }
    }
}

void solve()
{
    int n, q, u, v;

    while (cin >> n and n)
    {

        while (cin >> u and u)
        {

            while (cin >> v and v)
            {
                graph[u].pb(v);
            }
        }

        cin >> q;
        vi v;
        while (q--)
        {
            int x;
            cin >> x;
            v.pb(x);
        }
        for (auto i : v)
        {
            for (int k = 1; k <= n; k++)
                vis[k] = 0;
            f = false;
            vector<int> ans;
            dfs(i, i);
            for (int j = 1; j <= n; j++)
            {
                if (j == i)
                {
                    if (!f)
                        ans.pb(j);
                }
                else if (!vis[j])
                {
                    ans.pb(j);
                }
            }

            cout << ans.size();
            for (int z : ans)
                cout << " " << z;
            cout << endl;
        }
        rep1(i, n)
        {
            graph[i].clear();
        }
    }
    // return;
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