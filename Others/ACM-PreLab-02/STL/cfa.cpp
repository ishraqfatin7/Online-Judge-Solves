#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    ll a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] & 1)
            a++;
        else
            b++;
    }

    cout << min(a, b) << endl;
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