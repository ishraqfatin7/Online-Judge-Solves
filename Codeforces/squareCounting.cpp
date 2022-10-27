#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        ll s;
        cin >> n >> s;

        ll x = pow(n, 2); //
        cout << s / x << endl;
    }
}
