#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll maxS = v[0] + v[v.size() - 1];
    for (int i = 1; i < v.size(); i++)
    {
        ll sum = v[i] + v[i - 1];
        maxS = max(maxS, sum);
    }
    cout << maxS << endl;
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