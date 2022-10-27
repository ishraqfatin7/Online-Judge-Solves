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
    vector<string> v(n);
    vector<bool> mark(n, false);
    map<string, int> mp;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
        mp[v[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        bool f = false;
        string s1, s2;
        for (int j = 0; j < v[i].size(); j++)
        {
            s2 ="";
            s1 += v[i][j];
            for (int k = j + 1; k < v[i].size(); k++)
            {
                s2+=(v[i][k]);
            }
            if (st.find(s1) != st.end() && st.find(s2) != st.end())
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << '1';
        else
            cout << '0';
    }
    cout << endl;
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