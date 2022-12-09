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
const int N = 1e6 + 9;
vi adj[N];
bool vis[N];
int path[N];
unordered_map<char, int> m;
unordered_map<int, char> um;
bool isEnd = false;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while (q.size())
    {
        int u = q.front();
        //  cout << um[u] <<" ";
        q.pop();
        for (int v : adj[u])
        {
            if (!vis[v])
            {
                // cout << um[v];
                q.push(v);
                path[v] = u;
                vis[v] = true;
            }
        }
    }
}

void solve()
{
    if (!isEnd)
    {
        isEnd = true;
    }
    else
        cout << endl;
    int n, q;
    cin >> n >> q;
   
    char ch = 'A';
    rep1(i, 26)
    {
        m[ch] = i;
        um[i] = ch;
        ch++;
    }
    rep(i, n)
    {
        string u, v;
        cin >> u >> v;
        adj[m[u[0]]].pb(m[v[0]]);
        adj[m[v[0]]].pb(m[u[0]]);

    }
    while (q--)
    {
        string s, des;
        cin >> s >> des;
        bfs(m[s[0]]);
        int dest = m[des[0]];
        cout << s[0];
        stack<char> res; 
        while (m[s[0]] != dest)
        {
            //cout << um[dest];
            res.push(um[dest]); 
            dest = path[dest];
        }
        while(res.size()){
            cout << res.top(); 
            res.pop(); 
        }
        CLEAR(vis, 0);
        //CLEAR(path, 0);
        cout << endl;
    }
    for(int i = 1; i<=26;i++){
        adj[i].clear(); 
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