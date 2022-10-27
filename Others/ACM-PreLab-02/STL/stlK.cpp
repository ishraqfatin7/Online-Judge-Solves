#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, d;
    cin >> n >> d;
    string s;
    ll t;
    string desc;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        mp.insert(make_pair(s, t));
    }
    vector<int> v;

    ll ans = 0;

    for (int i = 0; i < d; i++)
    {
        string ss;
        while (cin >> ss)
        {
            if (ss == ".")
            {
                v.push_back(ans);
                ans = 0;
                break;
            }

            if (mp[ss])
            {
                ans += mp[ss];
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    FAST;
    solve();
    // int tt;
    // cin >> tt;
    // while (tt--)
    // {
    //     solve();
    // }
}