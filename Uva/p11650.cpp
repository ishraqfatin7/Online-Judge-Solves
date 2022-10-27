#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v;
    ll sum = 0;
    bool first = true;
    ll prev = 0;
    ll prevI = 0;
    ll prevX = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    while (q--)
    {

        ll t;
        cin >> t;

        if (t == 1)
        {
            ll i, x;
            cin >> i >> x;

            if (first)
            {
                first = false;
                sum += x - v[i - 1];
                v[i - 1] = x;
                cout << sum << endl;
            }
            else
            {
                if (prevI != i)
                {
                    prevI = i;
                    cout << sum - prevX + x << endl;
                    sum = sum - prevX + x;
                }
                else
                {
                    prev = x;
                    cout << sum - prev + x << endl;
                    sum = sum - prev + x;
                }
            }
        }

        else if (t == 2)
        {
            ll x;
            cin >> x;
            prevX = x;
            v = {x};
            sum = n * x;
            cout << n * x << endl;
        }
    }
}

int main()
{
    FAST;
    solve();
}
