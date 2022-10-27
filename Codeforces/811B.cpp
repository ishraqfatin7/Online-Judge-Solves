#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int GetIndex(unordered_set<int> S, int K)
{

    int Index = 1;

    for (auto u : S)
    {

        if (u == K)
            return Index;

        Index++;
    }

    return -1;
}

void solve()
{

    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x] = 1;
    }
    bool f = false;
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        if (mp[x] == 1 && !f)
        {
            cnt++;
            mp[x] = 0;
        }
        else
        {
            f = true;
        }
    }

    cout << n - cnt << endl;
    // for(auto x:v2v){
    //     cout <<x<<" ";
    // }
    // cout <<endl;
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