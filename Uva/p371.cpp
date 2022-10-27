#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

bool cmp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return a.second < b.second;
}
void solve()
{
    ll l, h;
    while (cin >> l >> h and l and h)
    {
        vector<pair<ll, ll>> c;
        // vector<vector<ll>>v;
        if (l > h)
        {
            swap(l, h);
        }

        for (ll i = l; i <= h; i++)
        {
            ll x = i;
            ll count = 0;
            while (1)
            {
                if (x & 1)
                {
                    x = 3 * x + 1;
                }
                else
                {
                    x /= 2;
                }
                count++;
                if (x == 1)
                {

                    break;
                }
            }
            c.push_back(make_pair(i, count));
        }
        pair<ll, ll> v = *max_element(c.begin(), c.end(), cmp);
        // cout << v.first << " " << v.second << endl;
        // Between 1 and 20, 18 generates the longest sequence of 20 values.
        // for (int i = 0; i < c.size(); i++)
        // {
        //     if (c[i].second == v.second)
        //     {
        cout << "Between " << l << " and " << h << ", " << v.first << " generates the longest sequence of " << v.second << " values." << endl;
        //         break;
        //     }
        // }
    }
}

int main()
{
    solve();
}
