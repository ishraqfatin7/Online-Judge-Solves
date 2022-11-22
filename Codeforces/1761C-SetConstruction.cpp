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
const int N = 1e4 + 9;
vector<int> adj[N];
vector<int> St[N];
int vis[N];

void bfs(int n)
{
    queue<int> q;
    rep(i, n)
    {
        if (!vis[i])
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            vis[v]--;
            St[v].pb(u + 1);
            if (!vis[v])
            {
                q.push(v);
            }
        }
    }
}

void solve()
{
    int n, k;
    cin >> n;
    CLEAR(vis, 0);
    rep(i, n)
    {
        adj[i].clear();
        St[i].clear(); 
    }
    rep(i,n){
        St[i].pb(i+1); 
    }
    rep(i, n)
    {
        rep(j, n)
        {
            char x;
            cin >> x;
            if (x == '1')
            {
                adj[i].pb(j);
                vis[j]++;
            }
        }
    }
    bfs(n);
    for (int i = 0; i < n; i++)
    {
        cout << St[i].size() << " ";
        //sort(all(St[i]));
        for (auto x : St[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}