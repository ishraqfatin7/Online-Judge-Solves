/*
    Author: MEHEDI ISLAM REMON
    AUST CSE 44th Batch

*/
#include <bits/stdc++.h>
#define ll float
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define pb push_back
#define pi acos(-1)
#define Mod 100000007
#define sn 10000000011
#define MAX LLONG_MAX
using namespace std;

bool compare1(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.second > b.second) || (a.second == b.second && a.first > b.first);
}

bool compare(ll a, ll b)
{
    return a > b;
}

int main()
{
    fast;

    cout << setprecision(4) << fixed;
    while (1)
    {
        ll l, w;
        cin >> l >> w;
        if (l == 0 && w == 0)
        {
            break;
        }
        else
        {
            ll low = l / 2;
            ll high = l;
            ll res = l + w;
            ll last = res;
            while (low <= high)
            {
                ll mid = (low + high) / 2;
                ll road = mid * mid;
                ll p = l - mid;
                ll water = p * p;
                ll wminus = sqrt(road - water);
                ll otivuj = sqrt(water + (road - water));
                ll ans = mid + (w - wminus) + otivuj;
                if (ans < res)
                {
                    res = ans;
                    high = mid;
                }
                else
                {
                    low = mid;
                }
                if (fabs(last - ans) < .00001)
                    break;
                last = ans;
                // cout<<ans<<endl;
            }
            cout << res << endl;
        }
    }
}