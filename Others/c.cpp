#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    set<ll> even, odd;
    for (int i = 0; i < n; i += 2)
    {
        even.insert(arr[i] % 2);
    }
    for (int i = 1; i < n; i += 2)
    {
        odd.insert(arr[i] % 2);
    }
    if (even.size() == 1 && odd.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}