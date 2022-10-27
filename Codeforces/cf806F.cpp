#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

// const int N = 1e5 + 9;
// vector<int> g[N];

// bool vis[N];

// void dfs(string s, int u)
// {
//     vis[u] = true;
//     cout << u << " ";
//     for (auto x : v)
//     {

//         if (!vis[v])
//         {

//             dfs(v);
//         }
//     }
// }

void solve()
{
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<ll>::iterator it1, it2;
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        it1 = lower_bound(v.begin(), v.end(), i+1);
      
        if (*it1 > v[i])
        {
            cnt++;
        }
    }
    if(cnt&1){
        cnt++;
        cout<<cnt<<endl;
    }
    else
        cout << cnt/2 << endl;
};

int main()
{

    FAST;

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}