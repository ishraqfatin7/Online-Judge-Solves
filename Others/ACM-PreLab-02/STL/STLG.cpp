#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    set<ll> s;
    map<ll, ll> mp;
    vector<ll> v, v2;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            v.push_back(arr[i]);
        }
        else if (!s.count(arr[i]))
        {
            s.insert(arr[i]);
            v.push_back(arr[i]);
        }

        else
        {

            // cout << size << endl;
            v2.push_back(v.size());
            sort(v2.begin(), v2.end(), greater<ll>());
            v.clear();
        }
    }

    cout << v2[0] << endl;
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
