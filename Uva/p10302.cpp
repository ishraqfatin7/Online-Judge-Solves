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
    while (cin >> n)
    {
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            sum += i * i * i;
        }
        cout << sum << endl;
    }
}

int main()
{
    solve();
}
