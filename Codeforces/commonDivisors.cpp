#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main()
{
    int n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = arr[0];
    ll j;
    ll count = 0;
    for (ll i = 1; i < n; i++)
        ans = __gcd(arr[i], ans);
    for (j = 1; j * j < ans; j++)
    {

        if (ans % j == 0)
        {
            count += 2;
        }
    }
    if (j * j == ans)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}