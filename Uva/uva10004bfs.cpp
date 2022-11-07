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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int n, m;
vector<int> adj[MAX_N], dist;;
int color[250]; 
bool vis[MAX_N];
void bfs(int s){
    dist.assign(n+1,-1); 
    queue<int> q;
    dist[s] = 0; 
    q.push(s);
    bool bicolor = true; 
    while(!q.empty()){
        int u = q.front(); 
        q.pop();

        for(int v: adj[u]){
           
            if(dist[v] == -1 && color[u]!=0){
                dist[v] = dist[u] + 1;
                color[u] = 1;
                q.push(v);
            }
            else if (dist[v] != -1 && color[u] != color[v]){
                //visited;
                bicolor = false; 
            }
        }
    }
    if(!bicolor){
        cout <<"NOT BICOLORABLE"<<endl;
    }
    else cout <<"BICOLORABLE."<<endl;
}

void solve()
{
    while(cin >>n and n){
        cin >>m; 
        for(int i = 0;i<m;i++){
            int u,v;
            cin >>u >>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        bfs(0);
    }

    
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