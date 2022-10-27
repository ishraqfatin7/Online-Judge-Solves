#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
vector<bool> vis(N, false);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n * 2 - 1; i++)
    {
        if (s[i] == ')' && s[i + 1] == '(')
            cnt++;
    }
    cout << n - cnt << endl;

    // dfs(1);
    // for (int i = 1; i <= n; i++) {
    //   if (!vis[i]) {
    //     cout << "Disconnected Graph\n";
    //     return 0;
    //   }
    // }
    // cout << "Connected Graph\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}