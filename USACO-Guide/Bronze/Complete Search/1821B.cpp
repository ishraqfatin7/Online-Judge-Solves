#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 2e5 + 5;
vector<int> adj[N];
vector<ll> dis;

void dfs(ll u, ll par)
{
    for (auto v : adj[u])
    {
        if (v != par)
        {
            dis[v] = dis[u] + 1;
            dfs(v, u);
        }
    }
}

void solve()
{

    ll n, k, k2, a, b;
    cin >> n >> k >> k2;

    for (int i = 0; i < N; i++)
    {
        adj[i].clear();
        dis[i] = 0;
    }
    dis.resize(n);

    vector<ll> ccc;
    for (int i = 0; i < n; i++)
    {

        dis[i] = 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }

    dfs(0, -1);

    vector<ll> H2 = dis;

    ll node = max_element(dis.begin(), dis.end()) - dis.begin();

 

    dfs(node, -1);

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, dis[i] * k - H2[i] * k2);
    }

    cout << ans << "\n";
}

int main()
{
    ll t, n, x1, y1, x2, y2;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}