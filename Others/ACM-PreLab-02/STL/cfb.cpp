#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<int, int> mp;
void solve()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    ll a = 0, b = 0;
    set<ll> s;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if (s.count(arr[i]) == 0)
        {
            s.insert(arr[i]);
        }
    }
    bool f = true;
    for (auto it : mp)
    {
        if (it.second == 1 || it.first > n)
        {
            f = false;
            break;
        }
    }
    vector<int> v;
    if (f)
    {
        for (int i = 1; i <= n; i++)
        {
        }
    }
    else
        cout << -1 << endl;

    mp.clear();
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}